int simpleMultiplication(int a){
    if (a % 2 == 0)
        return (a * 8);
    else
        return (a * 9);
}

int simpleMultiplicationTwo(int a){
    return a % 2 ? 9*a : 8*a;  
}