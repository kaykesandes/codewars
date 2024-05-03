#include <iostream>

int past(int h, int m, int s) {
    int tseg = 0;
    tseg += h * 60 * 60;
    tseg += m * 60;      
    tseg += s;            
    return (tseg * 1000);
}

int past2(int h, int m, int s) {
    return 1000*(s + m*60 + h*60*60);
}

int main(){


    std::cout << past(0, 1, 1) << " : 61000" << std::endl;
    std::cout << past(1, 1, 1) << " : 3661000" << std::endl;
    std::cout << past(0, 0, 0) << " : 0" << std::endl;
    std::cout << past(1, 0, 1) << " : 3601000" << std::endl;

}