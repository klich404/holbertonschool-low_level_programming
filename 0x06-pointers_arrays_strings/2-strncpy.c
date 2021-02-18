#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is an integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != 00; x++)
		dest[x] = src[x];

	for (; x < n; x++)
		dest[x] = 00;

	return (dest);
}
