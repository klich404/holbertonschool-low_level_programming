#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: is a pointer
 * @src: is a pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != 0; x++)
		;

	for (y = 0; src[y] != 00; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = 00;

	return (dest);
}
