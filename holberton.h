#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
/**
* struct print - for specifiers conversion.
*
*@print: char pionter.
*@p: print fun specifiers.
*/
typedef struct print
{
char *print;
int (*p)();
} print_t;
int _printf(const char *format, ...);
int _putchar(char c);
int pchar(va_list arg);
int pstr(va_list arg);
int pdec(va_list arg);
int pint(va_list arg);
#endif
