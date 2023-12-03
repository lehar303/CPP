#ifndef DOG_H
#define DOG_H

#include <string_view>
#include <sstream>
#include <iostream>
class Dog{
    public:
        Dog() = default;
        Dog(std::string_view name_param,std::string_view breed_param, int p_age_param);
        ~Dog();

        void set_dog_name(std::string_view name);
        void set_dog_breed(std::string_view breed);
        void set_dog_age(int age);
        void print_info();

    private:
        std::string name;
        std::string breed;
        int* p_age{nullptr};
};

Dog::Dog(std::string_view name_param,std::string_view breed_param, int p_age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = p_age_param;
    std::cout << "Constructor: name " << name <<  std::endl;
    std::cout << "Dog: : " << name << " constructed at" << this << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Destructor: name " << name << std::endl;
    std::cout << "Dog: : " << name << " destructed at" << this << std::endl;
}

void Dog::set_dog_name(std::string_view name){
    this->name = name;
}

void Dog::set_dog_breed(std::string_view breed){
    this->breed = breed;
}

void Dog::set_dog_age(int age){
    *(this->p_age) = age;
}

void Dog::print_info(){
    std::cout << "Dog (" << this << ") : [name : " << name << " breed : " << breed << " age : " << *p_age << std::endl;

}




#endif
