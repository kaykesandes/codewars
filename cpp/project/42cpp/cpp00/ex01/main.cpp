#include <iostream>
#include <string>

class Contato {
private:
    int indice;
    std::string nome;
    std::string sobrenome;
    std::string apelido;

public:
    Contato(int idx, const std::string& n, const std::string& sn, const std::string& ap)
        : indice(idx), nome(n), sobrenome(sn), apelido(ap) {}

    
};


int main(){

    while (true){
        std::string comand;
        std::cout << "Lista de comandos, ADD, EXIT, SEARCH";

        std::cin >> comand;
        if(comand == "ADD")
        {
        
        }
        else if (comand == "SEARCH")
        {

        }
        else if(comand == "EXIT")
        {
            
        }
        else
            std::cout << "COMANDO INVALIDO";
        
    };
};