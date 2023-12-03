#include <iostream>
#include "dog.hpp"

/* void some_func(){
    Dog* p_dog = new Dog("Fluffy","Shepard",2);

    delete p_dog;
} */

int main(){
    
    //some_func();
    /* Dog dog1("Dog1","Shepard",2);
    Dog dog2("Dog2","Shepard",2);
    Dog dog3("Dog3","Shepard",2);
    Dog dog4("Dog4","Shepard",2); */

    Dog dog1("Fluffy","Shepard",2);
    dog1.print_info();

    dog1.set_dog_name("Pubmba");
    dog1.set_dog_breed("Wire Fox Terrier");
    dog1.set_dog_age(4);
    dog1.print_info(); 

    std::cout << "Main" << std::endl;

    return 0;
}



