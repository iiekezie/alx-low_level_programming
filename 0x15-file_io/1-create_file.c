#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with given content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd_o, res_o, len_0;

	if (filename == NULL)
		return (-1);

	fd_o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd_o == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len_0 = 0; text_content[len_0] != '\0'; len_0++)
			;

		res_o = write(fd_o, text_content, len_0);
		if (res_o == -1)
		{
			close(fd_o);
			return (-1);
		}
	}

	close(fd_o);
	return (1);
}
