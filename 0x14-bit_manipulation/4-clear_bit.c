#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: is a pointer to a binary number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
		return (-1);

	if (*n & 1 << index)
	{
		x = 1 << index;
		*n = *n ^ x;
	}

	return (1);
}
