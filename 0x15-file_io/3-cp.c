#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command-line arguments to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or exit with error codes.
 */
int main(int argc, char *argv[])
{
	int fd_fr, fd_t;
	ssize_t n_read, n_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((n_read = read(fd_fr, buffer, 1024) > 0))
	{
		n_write = write(fd_t, buffer, n_read);
		if (n_read != n_write)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_fr) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_fr);
		exit(100);
	}

	if (close(fd_t) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_t);
		exit(100);
	}

	return (0);
}
