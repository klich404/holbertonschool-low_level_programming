#include "holberton.h"

/**
 * swap_int - swap the value of a and b
 * @a: is a pointer
 * @b: is a pointer
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
