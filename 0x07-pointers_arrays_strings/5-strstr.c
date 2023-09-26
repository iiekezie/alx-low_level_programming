#include "main.h"
/**
* _strstr - this function locates a substring
* @stack:character string
* @needle:character string
* Return: a pointer to the beginning of substring or NULL
**/
char *_strstr(char *stack, char *needle)
{
	int i;
	int j;
	int l;

	for (i = 0; stack[i] != '\0'; i++)
	{
		for (l = i, j = 0; needle[j] != '\0'; j++, l++)
		{
			if (needle[j] != stack[l] || stack[l] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (stack + i);
		}
	}
	return (0);
}
