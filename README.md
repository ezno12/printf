Creating printf from scratch.

Printf - A function that produces output according to a format.

handle the following conversin specifiers :
 * c - character.
 * s - string.
 * d - decimal.
 * i - integr.
 * % - sign for sepcifier.

holbertion.h - define structures and prototypes.

_putchar - cotain _putchar function to write single charactere to output.

p_functions - contains functions:

 * pchar: _putchar single char.
 * pstr: _putchar string.
 * pdec: _putchar decimal.
 * pint: _putchar int.

_printf.c - contains procudre to get format stander output.


Exp:

char: _printf("%c\n", "H")
    
output: H
===========================>
String: _printf("%s\n", "Hello")

output: Hello
===========================>
Decimal: _printf("%d\n", "10189")

output: 10189
===========================>
Integer: _printf("%i\n", "44")

output: 44
