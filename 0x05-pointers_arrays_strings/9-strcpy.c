#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: is a pointer
 * @src: is a pointer
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != 00; x++)
	{
		dest[x] = src[x];
	}
	return(dest);
}
