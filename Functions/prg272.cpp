#include <iostream>
#include <math.h>

class cylinder{
    public:
        cylinder(){
            base_radius = 2.0;
            height = 2.0;
        }

        cylinder(double tad_param, double height_param){
            base_radius = tad_param;
            height = height_param;
        }

        //cylinder() = default;


    public:
        double base_radius = 1;
        double height = 1;
    
    public:
        void volume(){
            std::cout << M_PI*base_radius*base_radius*height;
        }

};

int main(){

    cylinder C1;
    C1.volume();

    cylinder C2(10.4,20.6);

    return 0;
}