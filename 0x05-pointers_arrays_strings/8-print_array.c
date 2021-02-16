#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: is a pointer
 * @n: is an integer
 */

void print_array(int *a, int n)
{
	int x;

	x = 0;
	n--;
	for (; n >= 0; n--, x++)
	{
		printf("%d", a[x]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
