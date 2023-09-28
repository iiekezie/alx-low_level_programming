#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse using recursion
* @c: The input string to print in reverse
**/

void _print_rev_recursion(char *c)
{
	if (*c)
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}
