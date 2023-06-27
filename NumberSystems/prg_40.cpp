#include <iostream>
#include <iomanip>

int main()
{
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

    std::cout << "----------------------------------------------------------" << std::endl;  

    int value1 {10}; //SAME AS singned int value1{10};
    int value2 {-300}; //SAME AS singned int value2{-300};

    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;

    //unsigned int value3 {-5}; // COMPILER ERROR

    std::cout << "-------FRACTIONAL NUMBERS--------" << std::endl;
    float number5 {1.12345678901234567890f}; // Precision : 7
    double number6 {1.12345678901234567890}; // Precision : 15
    long double number7  {1.12345678901234567890L};
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    //BEFORE PRECISION
    std::cout << "number5 is : " << number5 << std::endl; 
    std::cout << "number6 is : " << number6 << std::endl; 
    std::cout << "number7 is : " << number7 << std::endl; 

    //AFTER PRECISION
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number5 is : " << number5 << std::endl; //7 digits
    std::cout << "number6 is : " << number6 << std::endl; // 15'ish digits
    std::cout << "number7 is : " << number7 << std::endl; // 15+ digits

    float number8 = 192400023.0f;               // Error : narrowing conversion
    std::cout << "number8 : " << number8 << std::endl;

    std::cout << "---------INFINITY AND NAN-----------" << std::endl;
    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0
    //Infinity
    double result { number10 / number11 };    
    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;    
    //NaN
    result = number11 / number12;    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    std::cout <<"-----BOOLEAN------" << std::endl;

    bool red_light {false};
    bool green_light{true};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }

    //sizeof()
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;

    //Printing out a bool
    //1 -->> true
    //0 -->> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::boolalpha; //prints true/false instead of 1/0;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << "-----------CHARACTERS----------" << std::endl;
    char value = 'A';
    // char value = 65 ; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 

    std::cout << "--------AUTO-------" << std::endl;
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};
    
    //int modifier suffixes
    auto var6 { 123u}; // unsigned
    auto var7 { 123ul}; //unsigned long
    auto var8 { 123ll}; // long long

    std::cout << "var1 is " << typeid(var1).name() << " and occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 is " << typeid(var2).name() << " and occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 is " << typeid(var3).name() << " and occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 is " << typeid(var4).name() << " and occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 is " << typeid(var5).name() << " and occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 is " << typeid(var6).name() << " and occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 is " << typeid(var7).name() << " and occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 is " << typeid(var8).name() << " and occupies : " << sizeof(var8) << " bytes" << std::endl;

    auto var9 {333u}; // Declare and initialize with type deduction    
    var9 = -22; // Assign negative number. DANGER!    
    std::cout << "var9 : " << var9 << std::endl;

    return 0; 
}

