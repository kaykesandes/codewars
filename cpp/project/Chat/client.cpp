#include <iostream>
#include <WS2tcpip.h> // Para WinSock
#include <string>

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
    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == INVALID_SOCKET) {
        std::cerr << "Erro ao criar o socket!" << std::endl;
        WSACleanup();
        return -1;
    }

    // Configura o endereço do servidor
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(3333);
    inet_pton(AF_INET, "127.0.0.1", &hint.sin_addr);

    // Conecta-se ao servidor
    int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
    if (connResult == SOCKET_ERROR) {
        std::cerr << "Erro ao se conectar ao servidor!" << std::endl;
        closesocket(sock);
        WSACleanup();
        return -1;
    }

    char buf[4096];
    std::string userInput;

    while (true) {
        // Recebe a mensagem do servidor
        ZeroMemory(buf, 4096);
        int bytesReceived = recv(sock, buf, 4096, 0);
        if (bytesReceived == SOCKET_ERROR) {
            std::cerr << "Erro ao receber mensagem do servidor!" << std::endl;
            break;
        }

        if (bytesReceived == 0) {
            std::cerr << "Servidor desconectado" << std::endl;
            break;
        }

        // Exibe a mensagem do servidor
        std::cout << "Servidor: " << std::string(buf, bytesReceived) << std::endl;

        // Solicita ao usuário para digitar uma mensagem
        std::cout << "Digite uma mensagem para enviar ao servidor: ";
        std::getline(std::cin, userInput);

        // Envia a mensagem para o servidor
        int sendResult = send(sock, userInput.c_str(), userInput.size() + 1, 0);
        if (sendResult == SOCKET_ERROR) {
            std::cerr << "Erro ao enviar mensagem para o servidor!" << std::endl;
            break;
        }
    }

    // Fecha o socket
    closesocket(sock);

    // Libera o Winsock
    WSACleanup();

    return 0;
}
