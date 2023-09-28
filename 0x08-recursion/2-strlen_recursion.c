#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @c: The input string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *c)
{
	int longit = 0;

	if (*c)
	{
		longit++;
		longit += _strlen_recursion(c + 1);
	}

	return (longit);
}
