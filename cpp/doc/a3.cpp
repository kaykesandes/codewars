#include <iostream>
#include <clocale>


int main(){
    std::setlocale(LC_ALL, "pt_BR.UTF-8");

    int x, y, sum = 0;
    
    std::cout << "Escreva um numero: " << std::endl;

    std::cin >> x;
    
    std::cout << "Escreva outro numero: " << std::endl;

    std::cin >> y;

    sum = x + y;

    std::cout << "A soma é: " << sum << std::endl;
    return (0);
}