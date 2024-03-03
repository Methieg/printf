#include "main.h"

/**
 * _printf : simple function to print input given to it
 * 
 * @param fmt : handles format conversion 
 * @param ... : handles variadic input 
 * Return : (0) - Success
 */
int _printf(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
 
    while (*fmt)
    {
        if (*fmt == '%')
        {
            fmt++;
            switch (*fmt)
            {
            case 'd':
            case 'c':
                write_int_or_char(&args, *fmt);
                break;
            case 'f':
            write_float(&args);
            break;
            case 's':
            {
                char *s = va_arg(args, char *);
                write(1, s, strlen(s));
                break;
            }
            
            default:
                write(1, "%", 1);
                write(1, fmt, 1);
                break;
            }
        }
        else
        {
            write(1, fmt,1);
        }
        fmt++;
    }

    va_end(args);
    return (0);
}