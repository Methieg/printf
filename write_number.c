#include "main.h"

/**
 * write_number : handles numbers fed to it.
 * 
 * @param num : takes number fed to it 
 * @param base : base of nnumber
 */ 
void write_number(unsigned long num, unsigned base)
{
    char buffer[65];
    char *ptr = &buffer[64];
    *ptr = '\0';

    do
    {
        unsigned digit = num % base;
        *--ptr = digit < 10 ? '0' + digit : 'a' + digit - 10;
        num /= base;
    } while (num != 0);
    write(1, ptr, &buffer[64] - ptr);
}
