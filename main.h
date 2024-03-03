#include <stdio.h>
int _printf(const char *format, ...);
void write_number(unsigned long num,unsigned base);
void write_int_or_char(va_list *args, char specifier);
void write_float(va_list *args);
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>