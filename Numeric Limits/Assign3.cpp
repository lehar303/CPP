#include <iostream>

int main(){

    double length,width,height,base_area,volume;
    std::cout << "Welcome to box calculator. Please type in length, width and height information. \n";
    std::cout << "length: ";
    std::cin >> length ;
    std::cout << std::endl;
    std::cout << "width: ";
    std::cin >> width ;
    std::cout << std::endl;
    std::cout << "height: ";
    std::cin >> height ;
    std::cout << std::endl;
    base_area = width * length;
    volume = base_area * height;
    std::cout << "Base area is: " << base_area <<std::endl;
    std::cout << "The volume is: " << volume << std::endl;

    return 0;
}