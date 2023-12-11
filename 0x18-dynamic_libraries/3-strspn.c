#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @c: string to evaluate
 * @accept: string containing the list of characters to match in c
 *
 * Return: the number of bytes in the initial segment
 * of c which consist only of bytes from accept
 */
unsigned int _strspn(char *c, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (c[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
