#include"Base_Conversion.h"
<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
int convert_dec_to_bin(int dec_no) {
    int bin = 0;
    int rem, i = 1, step = 1;
    while (dec_no != 0) {
        rem = dec_no % 2;
       dec_no /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
int convert_bin_to_dec(int bin_no) {
    int dec = 0, i = 0, rem;
    while (bin_no != 0) {
        rem = bin_no % 10;
        bin_no /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
int convert_dec_to_oct(int decimalNumber)
{
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}
int convert_oct_to_dec(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    return decimalNumber;
}