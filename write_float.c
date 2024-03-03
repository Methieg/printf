#include "main.h"

/**
 * write_float : handles float numbers.
 *
 * @param args : takes in float numbers
 */
void write_float(va_list *args)
{
    int i;
    double fractional;
    char digit;

    double f = va_arg(*args, double);

    

    if (f < 0)
    {
        write(1, "-", 1);
        f = -f;
    }
    write_number((unsigned long)f, 10);
    write(1, ".", 1);

   

    fractional = f - (unsigned long)f;

    for (i = 0; i < 6; i++)
    {
        fractional *= 10;

        

        digit = '0' + (int)fractional;
        write(1, &digit, 1);
        fractional -= (int)fractional;
    }
}