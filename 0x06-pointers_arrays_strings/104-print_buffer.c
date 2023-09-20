#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @b: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *b, int s, int l)
{
int j, k;
for (j = 0; j <= 9; j++)
{
if (j <= s)
printf("%02x", b[l * 10 + j]);
else
printf("  ");
if (j % 2)
putchar(' ');
}
for (k = 0; k <= s; k++)
{
if (b[l * 10 + k] > 31 && b[l * 10 + k] < 127)
putchar(b[l * 10 + k]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @d: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *d, int size)
{
int i;
for (i = 0; i <= (size - 1) / 10 && size; i++)
{
printf("%08x: ", i * 10);
if (i < size / 10)
{
print_line(d, 9, i);
}
else
{
print_line(d, size % 10 - 1, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
