/*
 * File: 100-main_opcodes.c
 * Auth: Ifeanyi I Ekezie
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i == (number - 1))
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
