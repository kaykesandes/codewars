#include <vector>
#include <iostream>

int grow(std::vector<int> nums) {
    int sum = 1;

    for (int i = 0; i <= (nums.size() - 1) ; i++)
        sum = nums[i] * sum;
    return (sum);
}

int growForAuto(std::vector<int> nums){
    int num = 1;

    for(auto x : nums)
        num *= x;

    return (num);
}


int main(){
    std::vector<int> numero = {1, 2, 3, 4};
    
    std::cout << grow(numero) << std::endl;
    std::cout << growForAuto(numero) << std::endl;
    
    return (0);
}