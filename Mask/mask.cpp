#include<iostream>
#include<iomanip>
#include<bitset>

int main()
{
    const int COLUMN_WIDTH {20};

    const unsigned char mask_bit_0 {0b00000001}; 
    const unsigned char mask_bit_1 {0b00000010};
    const unsigned char mask_bit_2 {0b00000100};
    const unsigned char mask_bit_3 {0b00001000};
    const unsigned char mask_bit_4 {0b00010000};
    const unsigned char mask_bit_5 {0b00100000};
    const unsigned char mask_bit_6 {0b01000000};
    const unsigned char mask_bit_7 {0b10000000};

    const unsigned int red_mask {0xFF000000};
    const unsigned int green_mask {0x00FF0000};
    const unsigned int blue_mask {0x0000FF00};
    const unsigned int alpha_mask {0x000000FF};// Transparency information

    unsigned int my_color {0xAABCDE00};

    unsigned char var {0b00000000};

    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    //SET BIT 1
    var |= mask_bit_1;
    std::cout << std::setw(COLUMN_WIDTH) << "Setting bit in position 1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    //SET BIT 5
    var |= mask_bit_5;
    std::cout << std::setw(COLUMN_WIDTH) << "Setting bit in position 5: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    //RESET BIT 1
    var &= ~(mask_bit_1);
    std::cout << std::setw(COLUMN_WIDTH) << "Resetting bit in position 1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    //RESET BIT 5
    var &= ~(mask_bit_5);
    std::cout << std::setw(COLUMN_WIDTH) << "Resetting bit in position 5: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    //SET ALL BITS
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 |
    mask_bit_6 | mask_bit_7);
    std::cout << std::setw(COLUMN_WIDTH) << "Setting bits in all positions: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    //RESET ALL BITS
    var &= ~(mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 |
    mask_bit_6 | mask_bit_7);
    std::cout << std::setw(COLUMN_WIDTH) << "Resetting bits in all positions: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    //CHECK STATE OF BIT
    std::cout << "bit0 is" << ((var & mask_bit_0) >> 0) << std::endl;

    //TOGGLE
    var ^= mask_bit_0;
    std::cout << std::setw(COLUMN_WIDTH) << "Toggle bit 0: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    std::cout << std::hex << std::showbase << std::endl;
	
    std::cout << "Red is : " <<  ((my_color & red_mask) >> 24) << std::endl;
    std::cout << "Green is : " <<  ((my_color & green_mask) >> 16) << std::endl;
    std::cout << "Blue is : " <<  ((my_color & blue_mask) >> 8) << std::endl;
    std::cout << "Alpha is : " <<  ((my_color & alpha_mask) >> 0) << std::endl;



    return 0;
}