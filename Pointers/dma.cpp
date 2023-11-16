#include<iostream>

int main()
{
   /*  int number {22}; // Stack
	
	int * p_number = &number;
	
	std::cout << std::endl;
	std::cout << "Declaring pointer and assigning address : " << std::endl;
	std::cout << "number : " << number << std::endl;
	std::cout << "p_number : " << p_number << std::endl;
	std::cout << "&number : " << &number << std::endl;
	std::cout << "*p_number : " << *p_number <<  std::endl;
	
	
	int * p_number1; // Uninitialized pointer , contains junk address
	int number1 {12};
	p_number1 = &number1; // Make it point to a valid address
	std::cout << std::endl;
	std::cout << "Uninitialized pointer : " << std::endl;
	std::cout << "*p_number1 : " << *p_number1 << std::endl; */

    /* int *p_number{nullptr};
    p_number = new int;

    *p_number = 77;

    std::cout << "*p_number: " << *p_number << std::endl;

    delete p_number;
    p_number = nullptr;
 */

    /* int *p_number5{ new int}; // Memory location contains junk value
     int *p_number6{ new int (22) }; // use direct initialization
     int *p_number7{ new int { 23 } }; // use uniform initialization
	 
	 std::cout << std::endl;
	 std::cout << "Initialize with valid memory address at declaration : " << std::endl;
	 std::cout << "p_number5 : " << p_number5 << std::endl;
	 std::cout << "*p_number5 : " << *p_number5 << std::endl; // Junk value
	 
	 std::cout << "p_number6 : " << p_number6 << std::endl;
	 std::cout << "*p_number6 : " << *p_number6 << std::endl;
	 
	 std::cout << "p_number7 : " << p_number7 << std::endl;
	 std::cout << "*p_number7 : " << *p_number7 << std::endl;
	 
	 //Remember to release the memory
	  delete p_number5;
	  p_number5 = nullptr;
	  
	  delete p_number6;
	  p_number6 = nullptr;
	  
	  delete p_number7;
	  p_number7 = nullptr;

       //Can reuse pointers
      p_number5 = new int(81);
      std::cout << "p_number5 : " << p_number5 << std::endl;
      std::cout << "*p_number5 : " << *p_number5 << std::endl;
       delete p_number5;
	  p_number5 = nullptr;  */


      //int *data = new int[10000000000];

    /* for(size_t i{0} ; i < 10000000 ; ++i){
        int * data = new int[100000000];
    } */

   /*  for( size_t i{0}; i<100; i++){
        try{
            int * data = new int[1000000000000];
        }catch(std::exception& ex){
            std::cout << "What is happening: " << ex.what() << std::endl;
        }
    } */

    /* for(size_t i=0; i<100; i++)
    {
        int *data = new(std::nothrow) int [100000000000];

        if(data!=nullptr){
            std::cout << "Allocated" << std::endl;
        }
        else
        std::cout << "Failed" << std::endl;
    } */

    size_t size = 10;

    double *p_salaries = new double[size];

    int *p_students = new(std::nothrow) int[size];

    double *p_scores = new(std::nothrow) double[size]{1,2,3,4,5};

    for(size_t i=0; i<10; i++){
        std::cout << p_scores[i] << ": " << *(p_scores+i) <<std::endl;
    }

    delete [] p_salaries;
    p_salaries = nullptr;
    delete [] p_students;
    p_students = nullptr;
    delete [] p_scores;
    p_scores = nullptr;


    std::cout << "Program endng well" << std::endl;
    return 0;
}