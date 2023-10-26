#include "main.h"

/*
 * File: 5-flip_bits.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: number second
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			counter++;
		xor_result >>= 1;
	}

	return (counter);
}
