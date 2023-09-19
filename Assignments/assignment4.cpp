#include<iostream>

int main(){

    int val;
    std::cout << "Please type in an integral value" << std::endl;
    std::cin >> val;

    if(val%2 == 0)
        std::cout << val << " is even" <<std::endl;
    else
        std::cout << val << " is odd" <<std::endl;

    return 0;
}