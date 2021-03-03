#include "holberton.h"
#include <stdlib.h>

/**
 *
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width == 0 || height == 0)
		return (0);

	arr = malloc(height * sizeof(int *));
	if (arr == 0)
	{
		free(arr);
		return (0);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(int));
		if (arr[x] == 0)
		{
			for (; x > width; x--)
				free(arr[x]);

			return (0);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}
