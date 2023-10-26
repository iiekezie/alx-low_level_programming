#include "main.h"

/*
 * File: 100-get_endianness.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * get_endianness - checks the endianness of the system.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int numu = 1;
	char *endian = (char *)&numu;

	if (*endian == 1)
		return (1);

	return (0);
}
