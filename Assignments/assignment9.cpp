#include<iostream>
#include<iomanip>

int main()
{
    int year, first_day,days_in_feb;
    int j = 1;
    int col = 1;
    
    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << "Enter the first day of the year[1: Monday...7: Sunday]: ";
    std::cin >> first_day;
    std::cout << std::endl;
    days_in_feb = (year%4 == 0)? 29:28;
    std::cout << "Calender for " << year << std::endl;
    
    std::cout << "--JANUARY--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 31; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
         
    }
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;   
    j = 1;
    col = 1;
    std::cout << "--FEBRUARY--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= days_in_feb; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    }
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--MARCH--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 31; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    }
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--APRIL--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 30; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    } 
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--MAY--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 31; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    } 
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--JUNE--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 30; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    } 
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--JULY--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 31; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    } 
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--AUGUST--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 31; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    } 
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--SEPTEMBER--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 30; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    } 
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--OCTOBER--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 31; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    }
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--NOVEMBER--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 30; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    }
    //-------------------------------------------------------------------------------------------
    first_day = col;
    std::cout << std::endl; 
    std::cout << std::endl;    
    j = 1;
    col = 1;
    std::cout << "--DECEMBER--" << std::endl;
    std::cout << std::setw(5) << "MON" << std::setw(5) << "TUE" << std::setw(5) << "WED" << std::setw(5) << "THUR" << std::setw(5) << "FRI" << std::setw(5) << "SAT" << std::setw(5) << "SUN" << std::endl;
    for(int i = 1; i<= 31; i++)
    {        
        while(j != first_day)
        {
            std::cout<< std::setw(5) << "";
            j++;
            col++;
        }
        std::cout <<std::setw(5) << i;
        col++;
        if (col == 8)
        {
            std::cout << std::endl;
            col = 1;
        }  
    }  

    std::cout << std::endl;     

    return 0;
}