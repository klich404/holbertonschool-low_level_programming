#include "holberton.h"

/**
 *_strncat - concatenates two strings.
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is an integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != 00; x++)
		;

	for (y = 0; y < n && src[y] != 00; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = 00;

	return (dest);
}
