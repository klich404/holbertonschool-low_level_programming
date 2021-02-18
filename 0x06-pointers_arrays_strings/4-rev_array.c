#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: is a pointer
 * @n: is an integer
 */

void reverse_array(int *a, int n)
{
	int y, z, *pi, *pf;

	pi = a;
	pf = a;
	for (y = 0; y < n - 1; y++)
		pf++;

	for (y = 0; y < n / 2; y++)
	{
		z = *pf;
		*pf = *pi;
		*pi = z;

		pf--;
		pi++;
	}
}
