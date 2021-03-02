#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: is a pointer
 * @s2: is a pointer
 * Return: cat or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, len;
	char *cat;

	if (s1 == 00 || s2 == 00)
		return (0);

	for (x = 0; s1[x] != 00; x++)
		;

	for (y = 0; s2[y] != 00; y++)
		;

	len = x + y;
	cat = malloc(len * sizeof(char) + 1);

	if (cat == 00)
		return (0);

	for (x = 0; s1[x] != 00; x++)
		cat[x] = s1[x];

	for (y = 0; s2[y] != 00; y++)
		cat[x + y] = s2[y];

	cat[x + y] = 00;
	return (cat);
}
