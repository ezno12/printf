#include "holberton.h"
/**
* pchar - print char.
*
* @arg: char to print.
*
* Return: printed char , int (success).
*/
int pchar(va_list arg)
{
char c;
c = va_arg(arg, int);
_putchar(c);
return (1);
}
/**
* pstr - print string.
*
* @arg: string to print.
*
* Return: printed string, int (success).
*/
int pstr(va_list arg)
{
unsigned i;
char *s;
s = va_arg(arg, char *);
if (s == NULL)
s = "(null)";
for ( i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
return (i);
}

