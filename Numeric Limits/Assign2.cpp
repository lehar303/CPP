#include <iostream>

int main()
{
    double fahrenheit,celsius;
    std::cout << "Please entetr a degree value in celsius:" << std::endl;
    std::cin >> celsius;
    fahrenheit = (9.0 / 5) * celsius + 32;
    std::cout<< celsius << " is " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}