#include<iostream>

int main()
{

    auto func = [](){
        std::cout << "Hello World" << std::endl;
    };

    double a = 10.0;
    double b = 20.0;

    auto add = [a,b](){
        std::cout << "a+b: " << a+b << std::endl;
    };

    add();

    int c = 5;

    auto capt = [&c](){
        std::cout << "Inner Val: " << c << std::endl;
    };

    for(int i = 0; i< 5; i++)
    {
        std::cout << "Outer Val: " << c << std::endl;
        capt();
        c++;
    }

    func();
    return 0;
}