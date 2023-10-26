#include "main.h"

/*
 * File: 0-binary_to_uint.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * binary_to_uint - Converts a binary string to an
 * unsigned int.
 * @b: Pointer to a binary string.
 *
 * Return: The converted number, or 0 if invalid characters in the string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numui = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
			numui = numui << 1;
		else if (b[i] == '1')
			numui = (numui << 1) | 1;
		else
			return (0); /* Invalid character found */
		i++;
	}

	return (numui);
}
