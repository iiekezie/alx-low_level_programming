#include "main.h"

/*
 * File: 4-clear_bit.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: A pointer to the number
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
