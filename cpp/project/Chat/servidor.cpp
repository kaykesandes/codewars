#include <iostream>
#include <WS2tcpip.h> 
#include <string>
#include <sstream>

#pragma comment(lib, "ws2_32.lib") // Adiciona a biblioteca WS2_32.lib

int main() {
    WSADATA wsData;
    WORD ver = MAKEWORD(2, 2);

    int wsOk = WSAStartup(ver, &wsData);
    if (wsOk != 0) {
        std::cerr << "Erro ao inicializar o Winsock!" << std::endl;
        return -1;
    }

    // Cria um socket
    SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
    if (listening == INVALID_SOCKET) {
        std::cerr << "Erro ao criar o socket!" << std::endl;
        WSACleanup();
        return -1;
    }

    // Configura o endereço do servidor
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(3333);
    hint.sin_addr.S_un.S_addr = INADDR_ANY; // Permite conexões de qualquer endereço IP na rede local

    // Liga o socket ao IP e porta
    if (bind(listening, (sockaddr*)&hint, sizeof(hint)) == SOCKET_ERROR) {
        std::cerr << "Erro ao ligar o socket ao IP/porta!" << std::endl;
        closesocket(listening);
        WSACleanup();
        return -1;
    }

    // Coloca o socket em modo de escuta
    if (listen(listening, SOMAXCONN) == SOCKET_ERROR) {
        std::cerr << "Erro ao colocar o socket em modo de escuta!" << std::endl;
        closesocket(listening);
        WSACleanup();
        return -1;
    }

    std::cout << "Servidor iniciado. Aguardando conexões..." << std::endl;

    // Aceita uma conexão
    sockaddr_in client;
    int clientSize = sizeof(client);
    SOCKET clientSocket = accept(listening, (sockaddr*)&client, &clientSize);
    if (clientSocket == INVALID_SOCKET) {
        std::cerr << "Erro ao aceitar a conexão!" << std::endl;
        closesocket(listening);
        WSACleanup();
        return -1;
    }

    // Fecha o socket de escuta
    closesocket(listening);

    // Recebe o UUID do cliente
    char buf[4096];
    ZeroMemory(buf, 4096);
    int bytesReceived = recv(clientSocket, buf, 4096, 0);
    if (bytesReceived == SOCKET_ERROR) {
        std::cerr << "Erro ao receber dados do cliente!" << std::endl;
        closesocket(clientSocket);
        WSACleanup();
        return -1;
    }

    std::string clientUUID = buf;

    std::cout << "Cliente conectado: " << clientUUID << std::endl;

    // Envia uma mensagem de confirmação para o cliente
    std::string message = "Conectado como cliente " + clientUUID;
    int bytesSent = send(clientSocket, message.c_str(), message.size() + 1, 0);
    if (bytesSent == SOCKET_ERROR) {
        std::cerr << "Erro ao enviar mensagem para o cliente!" << std::endl;
    }

    std::cout << "Mensagem de confirmação enviada para o cliente." << std::endl;

    // Fecha o socket do cliente
    closesocket(clientSocket);

    // Libera o Winsock
    WSACleanup();

    return 0;
}
