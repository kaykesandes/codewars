#include <cmath>
#include <iostream>
#include <clocale>

int main(){
    std::setlocale(LC_ALL, "pt_BR.UTF-8");

    double valor = 16.0;
    double raizQuadrada = std::sqrt(valor);
    std::cout << "A raiz quadrada de " << valor << " é " << raizQuadrada << std::endl;
    return (0);
}