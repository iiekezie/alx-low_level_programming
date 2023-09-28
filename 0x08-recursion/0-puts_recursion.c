#include "main.h"

/**
* _puts_recursion - Prints a string using recursion
* @c: The input string to print
* Return: print string to output
**/

void _puts_recursion(char *c)
{
if (*c == '\0')
{
_putchar('\n');
return;
}
_putchar(*c);
c++;
_puts_recursion(c);
}
