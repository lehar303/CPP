#include<iostream>

template <typename T>
void print_number(T n){
    static_assert(std::is_integral_v<T>,"print_number() can be called with only integer variables");
    std::cout << "Number: " << n << std::endl;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << "std::is_integral<int>: " << std::is_integral<int>::value << std::endl;
    std::cout << "std::is_floating_point<int>: " << std::is_floating_point<int>::value << std::endl;
    std::cout << "std::is_floating_point_v<int>: " << std::is_floating_point_v<int> << std::endl;

    double a = 7;
    print_number(a);


    return 0;
}