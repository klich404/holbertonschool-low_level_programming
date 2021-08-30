#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value located, otherwise, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, h = size - 1, mid  = 0, i;

	if (array == NULL)
		return (-1);

	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i < h)
				printf(", ");
		}
		printf("\n");
		mid = (h + l) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			h = mid - 1;
	}
	return (-1);
}
