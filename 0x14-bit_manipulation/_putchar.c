#include <unistd.h>

/*
 * File: _putchar.c
 * Auth: Ifeanyi I Ekezie
 */

/**
 * _putchar - write a character to stdout
 * @c: The character to print
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
