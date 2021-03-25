#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is the binary number to convert
 * Return: the decimal number or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y, len, dec = 0;
	int z;

	for (len = 0; b[len] != 00; len++)
		;
	len = (len - 1);

	for (x = 0; x <= len; x++)
	{
		y = 1;
		z = (b[x] - '0');

		if ((z > 1) || (z < 0) || (b == NULL))
			return (0);

		y = y << (len - x);
		dec = dec + z * y;
	}
	return (dec);
}
