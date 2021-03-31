#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd1 = 0, fd2 = 0, rd = 0, wr = 0;
	char *file_from, *file_to, buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	error98(file_from);

	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		error99(file_to);

	rd = read(fd1, buffer, BUFSIZ);
	if (rd == -1)
		error98(file_from);

	wr = write(fd2, buffer, rd);
	if (wr == -1)
		error99(file_to);

	if (close(fd1) == -1)
		error100(file_from);

	if (close(fd2) == -1)
		error100(file_to);

	return (0);
}

/**
 * error98 - if file_from does not exist, or if you can not read it
 * @file_from: the first argument passed to your program
 */
void error98(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * error99 - if you can not create or if write to file_to fails
 *@file_to: the second argument passed to your program
 */
void error99(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * error100 - if you can not close a file descriptor
 * @file: the value of the file descriptor
 */
void error100(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}
