#include <vector>
#include <iostream>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    int sum = 0;

    for (int points : classPoints)
        sum += points;

    int classAverage = sum / classPoints.size();
    return (yourPoints > classAverage);
}

int main(){
    std::vector<int> classPoints = {85, 90, 75, 88, 92};

    int yourPoints = 87;


    if (betterThanAverage(classPoints, yourPoints))
        std::cout << "Parabens";
    else
        std::cout << "Não foi dessa";


    std::cout << "\nEnter ....";
    std::cin.get();
    return 0;
}