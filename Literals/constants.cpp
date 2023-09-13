#include <iostream>
#include <string>

const int aa {33};
constexpr int ab {43};
int ac {53};



int main()
{
    constexpr int VERSION {123};
    const int age = 69;
    std::cout <<  age << std::endl;

    constexpr int a = 45;
    std::cout <<  a << std::endl;

    int b = 1;
    constexpr int c {2};

    const int d = 2;
    constexpr int e {d * 5};

    static_assert( VERSION == 123);

    std::cout << "Working" << std::endl;
    std::cout << __cplusplus << std::endl;

    const int val1 {33};


    return 0;
}