#include<iostream>
#include <ctime>
#include <cstdlib>

int main()
{

    int scores[10];

    std::cout << "scores[0]:" << scores[0] << std::endl;

    /* //ENter data
    for(size_t i{}; i< 10; ++i){
        std::cin >> scores[i];
    }

    //printdata
    for(size_t i{}; i< 10; ++i){
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }
 */
    std::cout << "Size of scores: " << sizeof(scores) << std::endl;
    //std::cout << "Size of scores(c++ 17): " << std::size(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;

    std::srand(std::time(0));
    int random_num = std::rand();
    std::cout << "number: " << random_num << std::endl;

    random_num = std::rand();
    std::cout << "number: " << random_num << std::endl;

    std::cout << "RAND_MAX" << RAND_MAX << std::endl;

    return 0;
}