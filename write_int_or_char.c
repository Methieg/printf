#include "main.h"

/**
 * write_int_or_char : helps to handle int or char
 * 
 * @param args : handles  arguments fed to it
 * @param specifier : specifies data type
 */

void write_int_or_char(va_list *args, char specifier)
{
    if (specifier == 'd')
    {
        int num = va_arg(*args, int);
        if (num < 0)
        {
            write(1, "-", 1);
            num = -num;
        }
    }

    else if (specifier == 'c')
    {
        char c = (char)va_arg(*args, int);
        write(1, &c, 1);
    }
}
