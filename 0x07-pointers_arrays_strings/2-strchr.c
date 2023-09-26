#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @b: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * b in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char b)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == b)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
