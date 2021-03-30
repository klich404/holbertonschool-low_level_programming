#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd1, fd2, rd, wr, cs1, cs2;
	char *file_from, *file_to, buffer[1024];

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

	rd = read(fd1, buffer, 1024);
	if (rd == -1)
		error98(file_from);

	wr = write(fd2, buffer, rd);
	if (wr == -1)
		error99(file_to);

	cs1 = close(fd1);
	if (cs1 == -1)
		error100(fd1);

	cs2 = close(fd2);
	if (cs2 == -1)
		error100(fd2);

	return (0);
}

/**
 * error98 - if file_from does not exist, or if you can not read it
 * @file: the first argument passed to your program
 */
void error98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error99 - if you can not create or if write to file_to fails
 *@file: the second argument passed to your program
 */
void error99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error100 - if you can not close a file descriptor
 * @file: the value of the file descriptor
 */
void error100(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	exit(100);
}
