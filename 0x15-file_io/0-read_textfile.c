#include "holberton.h"

/**
 * read_textfile -  reads a text file and prints it to the output
 * @filename: is the file to read
 * @letters: is the numbers of letters to read
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int fd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1 || wr != rd)
		return (0);

	free(buff);
	close(fd);
	return (wr);
}
