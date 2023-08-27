#include <iostream>
#include <limits>

int main(){

    std::cout << "Range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "Range for int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Range for long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "The range(with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << std::endl;

    return 0;
}