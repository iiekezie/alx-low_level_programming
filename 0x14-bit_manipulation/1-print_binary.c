#include "main.h"
#include <stdio.h>

/*
 * File: 1-print_binary.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, shifts = 0; (tmp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
