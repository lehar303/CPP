#include<iostream>
#include<typeinfo>

int main()
{
    int packages [3][4]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    std::cout << __cplusplus << std::endl;

    for(size_t i{0}; i<3; i++)
    {
        for(size_t j{0}; j<4 ; j++)
        {
            std::cout << packages[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //for(size_t i{0}; i < sizeof(packages)/sizeof(typeid(packages)); i++){

   // }

   std::cout << sizeof(packages)/sizeof(typeid(packages)) << std::endl;
   std::cout << "Size of packages: " << sizeof(packages) << std::endl;
   std::cout << "Size of packages[0]: " << sizeof(packages[0]) << std::endl;
   std::cout << "Size of packages[0][0]: " << sizeof(packages[0][0]) << std::endl;
   std::cout << "Size of int" << sizeof(typeid(packages)) << std::endl;
   std::cout << "Size of int" << sizeof(int) << std::endl;

   int rows = sizeof(packages)/sizeof(packages[0]);
   int cols = sizeof(packages[0])/sizeof(packages[0][0]);

   std::cout << "Rows: " << rows << " Cols: " << cols << std::endl;

   //3d array

   int three_d [5][4][3]{
    {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}},
    {{13,14,15}, {16,17,18}, {19,20,21}, {22,23,24}},
    {{25,26,27}, {28,29,30}, {31,32,33}, {34,35,36}},
    {{37,38,39}, {40,41,42}, {43,44,45}, {46,47,48}},
    {{49,50,51}, {52,53,54}, {55,56,57}, {58,58,60}}
   };

   int rows_3d = sizeof(three_d)/sizeof(three_d[0]);
   int col_3d = sizeof(three_d[0])/sizeof(three_d[0][0]);
   int ht_3d = sizeof(three_d[0][0])/sizeof(three_d[0][0][0]);

   std::cout << "rows_3d: " << rows_3d << " cols_3d: " << col_3d << " ht_3d: " << ht_3d << std::endl;

   for(size_t i{0}; i<rows_3d; i++){
    for(size_t j{0}; j<col_3d; j++){
        std::cout << "{" ;
        for(size_t k{0}; k<ht_3d; k++){
            std::cout  << three_d[i][j][k] << " " ;
        }
        std::cout << "}" ;
    }
    std::cout << std::endl;
   }
    return 0;
}