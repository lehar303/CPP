#include<iostream>

int main(int argc, char **argv)
{
    std::cout << "We have " << argc << " argumnets passed to the program" << std::endl;

    for(size_t i {0}; i < argc ; ++i){
        std::cout << "parameter [" << i << "] :" <<  argv[i] << std::endl;
    }

    return 0;
}