#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count 
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	y = 0;
	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x <= argc - 1; x++)
		{
			for (z = 0; argv[x][z] != 00; z++)
			{
				if (argv[x][z] < 48 && argv[x][z] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			y = y + atoi(argv[x]);
		}
		printf("%d\n", y);
	}
	return (0);
}
