#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: is a pointer
 */

void rev_string(char *s)
{
	int x, y;
	char *pi, *pf, z;

	for (x = 0; s[x] != 00; x++)
		;

	pi = s;
	pf = s;
	for (y = 0; y < x - 1; y++)
		pf++;

	for (y = 0; y < x / 2; y++)
	{
		z = *pf;
		*pf = *pi;
		*pi = z;

		pf--;
		pi++;
	}
}
