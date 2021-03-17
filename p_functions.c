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
/**
* pdec - print decimal.
*
* @arg: decimal to print.
*
* Return: printed decimal, int (success).
*/
int pdec(va_list arg)
{
int i = 1;
int x = va_arg(arg, int);
int n;
int last = x % 10;
int digit;
int exp = 1;

x = x / 10;
n = x;
if (last < 0)
{
_putchar('-');
n = -n;
x = -x;
last = -last;
i++;
}
if (n > 0)
{
while (n / 10 != 0)
{
exp = exp * 10;
n = n / 10;
}
n = x;
while (exp > 0)
{
digit = n / exp;
_putchar(digit + '0');
n = n - (digit * exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
/**
* pint - print int.
*
* @arg: integer to print.
*
* Return: printed int, int (success).
*/
int pint(va_list arg)
{
i = 1;
int x = va_arg(arg, int);
int n;
int last = x % 10;
int digit;
int exp = 1;
x = x / 10;
n = x;
if (last < 0)
{
_putchar('-');
n = -n;
x = -x;
last = -last;
i++;
}
if (n > 0)
{
while (n / 10 != 0)
{
exp = exp * 10;
n = n / 10;
}
n = x;
while (exp > 0)
{
digit = n / exp;
_putchar(digit + '0');
n = n - (digit * exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
}
