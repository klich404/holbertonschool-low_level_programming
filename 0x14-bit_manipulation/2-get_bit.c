#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: is a decimal number
 * @index: is the index
 * Return: 0, 1 or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 31)
		return (-1);

	num = n >> index;
	return (num & 1);
}
