#include <unsitd.h>
/**
 *_putchar - write character to ouput
 * @c: char
 * Return: if success 1 if fail -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
