#include<iostream>

int main(){

    int val;
    std::cout << "Please type in your age" << std::endl;
    std::cin >> val;

    if(val>= 21)
    {
        if(val <=39)
            std::cout << "You are eligible for the treatement" <<std::endl;
        else
            std::cout << "Sorry,you are too old for the treatement" <<std::endl;
    }
        
    else
        std::cout << "Sorry,you are too young for the treatement" <<std::endl;

    return 0;
}