#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: is an integer pointer
 * @size: is the size of array
 * @cmp: is a function pointer
 * Return: x, -1 or NULL
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp == 0 || array == 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
			return (x);
	}

	return (-1);
}
