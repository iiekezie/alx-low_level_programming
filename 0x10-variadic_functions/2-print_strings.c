#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * File: 2-print_strings.c
 * Auth: Ifeanyi i Ekezie
 */

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *str;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if ((a != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
