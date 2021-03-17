#include "holberton.h"
/**
* _printf - print function.
*
* @format: character.
*
* Return : printed caracter, int (success).
*
*/
int _printf(const char *format, ...)
{
va_list arg;
unsigned int i, j, flag;
unsigned int len = 0;
print_t print[] = {{"c", pchar}, {"s", pstr}, {NULL, NULL}};
va_start(arg, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (0);
i = 0;
while (format[i] != '\0')
{
if (format[i] == '%' && format[i + 1] != '%')
{
j = 0;
flag = 0;
while (print[j].p != NULL)
{
if (format[i + 1] == print[j].print[0])
{
len += print[j].p(arg);
flag = 1;
i++;
}
j++;
}
if (flag == 0)
{
_putchar(format[i]);
len += 1;
}
}
else if (format[i] == '%' && format[i + 1] == '%')
{
_putchar('%');
i++;
len += 1;
}
else
{
_putchar(format[i]);
len += 1;
}
i++;
}
va_end(arg);
return (len);
}
