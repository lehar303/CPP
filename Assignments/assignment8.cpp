#include<iostream>

int main()
{
    double x,y;
    std::cout << "Enter your x location" << std::endl;
    std::cin >> x;
    std::cout << "Enter your y location" << std::endl;
    std::cin >> y;
    
    if((x >= -10 && x<= 10) && (y >= -5 && y<= 5))
        std::cout << "You are completely surrounded. Don't move!" << std::endl;
    else
        std::cout << "You are out of reach!" << std::endl;
    
    return 0;
}