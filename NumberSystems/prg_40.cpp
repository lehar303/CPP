#include <iostream>

int main(){

    int number1 = 15;
    int number2 = 017;
    int number3 = 0x0F;
    int number4 = 0b00001111;

    std::cout << "Number1" << number1 <<std::endl;
    std::cout << "Number2" << number2 <<std::endl;
    std::cout << "Number3" << number3 <<std::endl;
    std::cout << "Number4" << number4 <<std::endl;

    int elephant_count;
    int lion_count{}; //default 0
    int dog_count{10}; //braced
    int cat_count{15}; 
    int apple_count(5); //functional
    int orange_count(10);

    int fruit_count (apple_count + orange_count);
    int domesticated_animals{dog_count + cat_count};

    //int narrowing_conversion {2.9}; //error
    int narrowing_conversion_functional(2.9); //truncated to 2 - NOT RECOMMENDED

    std::cout << "Lion: " << lion_count << std::endl;
    std::cout << "Dog: " << dog_count << std::endl;
    std::cout << "Cat: " << cat_count << std::endl;
    std::cout << "Apple: " << apple_count << std::endl;
    std::cout << "Orange: " << orange_count << std::endl;
    std::cout << "Fruit: " << fruit_count << std::endl;
    std::cout << "Animals: " << domesticated_animals << std::endl;

    std::cout << "Funcion init - 2.9: " << narrowing_conversion_functional << std::endl;

    std::cout << "Sizeof(int): " << sizeof(lion_count) << std::endl;    

    return 0;
}
