#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0A
 */

int main(int argc, char *argv[])
{
	int r;
	int (*xd)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	xd = get_op_func(argv[2]);

	if (xd == 0)
	{
		printf("Error\n");
		exit(99);
	}

	r = xd(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", r);

	return (0);
}
