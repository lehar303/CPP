#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Yellow" << std::endl;

    //std::flush

    std::cout << std::setfill('-');
    std::cout << std::setw(30) << "-" <<std::endl;
    std::cout << std::setfill(' ');

    std::cout << "FORMATTED TABLE: " <<std::endl;
    std::cout << std::setw(10) << "LastName" << std::setw(10) << "FirstName" << std::setw(5) << "Age" <<std::endl;
    std::cout << std::setw(10) << "Naidu" << std::setw(10) << "Leharika" << std::setw(5) << "25" <<std::endl;
    std::cout << std::left;
    std::cout << std::setw(10) << "Naidu" << std::setw(10) << "Leharika" << std::setw(5) << "25" <<std::endl;

    std::cout << std::setfill('-');
    std::cout << std::setw(30) << "-" <<std::endl;
    std::cout << std::setfill(' ');

    std::cout << "INTERNAL JUSTIFIED" <<std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << std::setfill('-');
    std::cout << std::setw(30) << "-" <<std::endl;
    std::cout << std::setfill(' ');

    bool condition {true};
    bool condition2 {false};

    std::cout << std::boolalpha;
    std::cout << "condition: " << condition << " condition2: " << condition2 <<std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition: " << condition << " condition2: " << condition2 <<std::endl;

    std::cout << std::setfill('-');
    std::cout << std::setw(30) << "-" <<std::endl;
    std::cout << std::setfill(' ');

    int pos_num {5};
    std::cout << std::showpos << "Pos: " << pos_num << std::endl;
    std::cout << std::noshowpos << "Pos: " << pos_num << std::endl;

    std::cout << std::setfill('-');
    std::cout << std::setw(30) << "-" <<std::endl;
    std::cout << std::setfill(' ');

    int pos_int {717171};
    int neg_int {-4322};
    double double_num {498.32};

    std::cout << std::endl;
    std::cout << "default base format : " << std::endl;
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;
    std::cout << "double_var : " << double_num << std::endl;
    
    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_num << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_num << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_num << std::endl;

    std::cout << std::setfill('-');
    std::cout << std::setw(30) << "-" <<std::endl;
    std::cout << std::setfill(' ');

    pos_int = 717171;
    
    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    
    //===================================================================
    std::cout << std::endl;


    //fixed and scientific : for floating point values
    
    double a{ 3.1415926535897932384626433832795 };
    double b{ 2006.0 };
    double c{ 1.34e-10 };
    
    std::cout << std::endl;
    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    
    //===================================================================
    std::cout << std::endl;

    //setprecision() : the number of digits printed out for a floating point. Default is 6
    
    a = 3.1415926535897932384626433832795;
    
    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << a <<  std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;
    
    //If the precision is bigger than supported by the type, you'll just print garbage.
    
    //===================================================================
    std::cout << std::endl;


    //showpoint and noshowpoint : show trailing zeros if necessary
    //Force output of the decimal point
    
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};
    
    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12
    std::cout << "g : " << g << std::endl;
    
    std::cout << std::endl;
    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12.0
    std::cout << "g : " << g << std::endl;


    return 0;
}