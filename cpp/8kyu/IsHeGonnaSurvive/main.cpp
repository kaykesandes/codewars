#include <iostream>

bool hero(int bullets, int dragons) {
    double dieDragon = (bullets / 2);
    if(dieDragon < dragons)
        return false;
    return true;
}

bool heroOne(int bullets, int dragons){
    return bullets / 2 >= dragons;
}

int main()
{
    std::cout << hero(10, 5)        << "true"   << std::endl;
    std::cout << hero(7, 4)         << "false"  << std::endl;
    std::cout << hero(4, 5)         << "false"  << std::endl;
    std::cout << hero(100, 40)      << "true"   << std::endl;
    std::cout << hero(1500, 751)    << "false"  << std::endl;
    std::cout << hero(0, 1)         << "false"  << std::endl;
}


/*
    São necessario 2 balas para matar um dragão

    hero(10, 5), Equals(true));
    hero(7, 4), Equals(false));
    hero(4, 5), Equals(false));
    hero(100, 40), Equals(true));
    hero(1500, 751), Equals(false));
    hero(0, 1), Equals(false));
*/