#include "holberton.h"
#include <stdlib.h>

/**
 *
 */

char *_strdup(char *str)
{
	int x, y;
	char *z;

	if (str == 0)
		return (0);

	for (x = 0; str[x] != 00; x++)
		;

	z = malloc(x * sizeof(char));

	if (z == 0)
		return (0);

	for (y = 0; y <= x; y++)
		z[y] = str[y];

	return (z);
}
