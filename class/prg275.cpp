#include <iostream>

#include "cylinder.hpp"


int main()
{
    Cylinder cylinder1(2,3);
    std::cout << "Base raduis: " << cylinder1.get_base_radius() << std::endl;
    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);
    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    Cylinder* C2 = new Cylinder(11,20);
    std::cout << "Vol C2: " <<  (*C2).volume() << std::endl;
    std::cout << "Vol C2: " << C2->volume() << std::endl;

    delete C2;

    Cylinder* C3 = &cylinder1;
    std::cout << "C3 vol: " << C3->volume() << std::endl;

    return 0;
}