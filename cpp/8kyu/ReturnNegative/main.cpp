#include <iostream>

int makeNegative(int num)
{
  return ((num > 0) ? (num - (num + num)) : (num));
}


int main(){
    std::cout << makeNegative(1) << std::endl;
    std::cout << makeNegative(-5) << std::endl; 
    std::cout << makeNegative(0) << std::endl;  

}