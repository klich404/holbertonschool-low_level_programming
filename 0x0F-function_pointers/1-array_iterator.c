#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a parameter on each element of an array
 * @array: is an int array
 * @size: is the size of array
 * @action: is a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action == 0)
		return;

	for (x = 0; x <= size; x++)
	{
		(*action)(array[x]);
	}
}
