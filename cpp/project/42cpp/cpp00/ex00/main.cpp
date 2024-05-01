#include <iostream>
#include <string>
#include <clocale>


int ft_toupper(int c)
{
    if (c >= 97  && c <= 122)
        return (c - 32);
    else
        return c;
    return 0;
}


int main(int argc, char* argv[]){

    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    std::string ret0 = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    if (argc < 2)
    {
        std::cout << ret0 << std::endl;
        return 0;
    }
    else {
        for (int i = 1; i < argc; ++i) {
            std::string argument = argv[i];
            for (char &c : argument) {
                c = ft_toupper(c);
            }
            std::cout << argument << " ";
        }
        return 0;
    }
}
