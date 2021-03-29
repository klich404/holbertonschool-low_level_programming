#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content:  the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count, wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (count = 0; text_content[count] != 00; count++)
		;

	wr = write(fd, text_content, count);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
