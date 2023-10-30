#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res_o, len_o;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len_o = 0; text_content[len_o] != '\0'; len_o++)
			;

		res_o = write(fd, text_content, len_o);
		if (res_o == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
