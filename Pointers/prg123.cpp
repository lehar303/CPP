#include<iostream>

int main(){

    /* int *p_number{};
    int *p_fractional_number{};

    int *p_number1{nullptr};
    double *p_fractional_number1{nullptr};

    int var {43};
    int *p_int{&var};

    std::cout << "Variable: " << var << std::endl;
    std::cout << "Memory: " << p_int << std::endl;

    int var1{69};
    p_int = &var1;

    std::cout << "Memory1: " << p_int << std::endl;

    char *p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;

    std::cout << "Variable: " << *p_char_var << std::endl;

    //char *p_message {"Hello World!"};

    const char * predictions []  {
        "a lot of kids running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before." 
    }; */

    //std::cout << predictions[5] << std::endl;

    //const

    /* int number {5};
    int *p_number{nullptr};
    p_number = &number;

    std::cout << "Number: " << number << std::endl;
    std::cout << "Pointer: " << p_number << std::endl;

    number = number+7;
    std::cout << "Number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    std::cout << "Modifying the value pointed to p_number through the ponter" << std::endl;
    *p_number = 123;
    std::cout << "Number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    std::cout << "Changing the poinetr to poin ata different variable" << std::endl;
    int number2 = 56;
    p_number = &number2;
    std::cout << "Number: " << number << std::endl;
    std::cout << "Number2: " << number2 << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl; */

    //pointer to const
    /* int number = 1;
    const int *p_number = &number;
    std::cout << "Number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    std::cout << "Cannot change value of varialble through the pointer but can modify the pointer to point at different data" << std::endl;
    int number2 = 2;
    p_number = &number2;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl; */

    /* const int number = 1;
    const int* const p_number = &number;

    std::cout << "Number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    std::cout << "Cannot change value of variable through pointer" << std::endl;
    //*p_number = 123;

    std::cout << "Cannout change pointer to point at a different variable" << std::endl;
    int number2 = 2;
    //p_number = &number2 */

    //Const pointer to non const

   /*  int number = 1;

    int* const p_number = &number;
    std::cout << "Number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    *p_number = 2;
    std::cout << "Number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    std::cout << "Can modify variable through pointer but cannot change the pointer to point at a different value" << std::endl;

    int number2 = 3;
    //p_number = &number2; */

    /* const  char * const   students [] {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    //Print out the students
	std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for ( const char * student : students){
        std::cout << student << std::endl;
    }

    *students[0] = 'K'; */

   /* int scores[10] {11,12,13,14,15,16,17,18,19,20};
    
    int * p_score { scores};
    
    //Print the address
    std::cout << "scores : " << scores << std::endl; // Array
    std::cout << "p_score : " << p_score << std::endl;// Pointer
    std::cout << "&scores[0]  : " << &scores[0] << std::endl;
    
    //Print the content at that address
	std::cout << std::endl;
	std::cout << "Printing out data at array address : " << std::endl;
    std::cout << "*scores : " << *scores << std::endl;
    std::cout << "scores[0] : " << scores[0] << std::endl;
    std::cout << "*p_score : " << *p_score << std::endl;
	std::cout << "p_score[0] : " << p_score[0] << std::endl; */

    /* int scores[10] {11,12,13,14,15,16,17,18,19,20};

    //scores++;
    
    int * p_score { scores};
    
    
    std::cout << "Values in scores array (p_score pointer increment) : " << std::endl;
	
    std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	++p_score; // Moves froward by sizeof(int) : 4 bytes */

    int arr0[5]{ 1,2,3,4,5 };
    int arr1[5]{ 6,7,8,9,10 };

     int * p_arr1 {arr1};
     int * p_arr0 {arr0};

    //Print arr0
    std::cout << "arr0 : ";
    for (size_t i{}; i < 5; ++i) {
        std::cout << *(p_arr0 + i) << " ";
    }
    std::cout << std::endl;

    //Print arr1
    std::cout << "arr1 : ";
    for (size_t i{}; i < 5; ++i) {
        std::cout << *(p_arr0 + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}