#include "main.h"

/**
 * write_float : handles float numbers. 
 * 
 * @param args : takes in float numbers 
 */
void write_float(va_list *args)
{
    double f = va_arg(*args, double);
    if (f < 0)
    {
        write(1,"-", 1);
        f = -f;
    }
    write_number((unsigned long)f, 10);
    write(1, ".", 1);

    double fractional = f - (unsigned long)f;

    for (int i = 0; i < 6; i++)
    {
        fractional *= 10;
        char digit = '0' + (int)fractional;
        write(1, &digit, 1);
        fractional -= (int)fractional;
    }
}