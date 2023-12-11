#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: A pointer to a string.
 * Return: The length of the string (an integer).
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
