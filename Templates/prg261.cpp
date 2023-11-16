#include<iostream>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "std::is_integral<int>: " << std::is_integral<int>::value << std::endl;
    

    return 0;
}