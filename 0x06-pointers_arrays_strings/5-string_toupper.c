#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * to uppercase
 * @s: The string to modify
 *
 * Return: A pointer to the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
