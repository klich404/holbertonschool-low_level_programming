#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: is a pointer
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != 00; x++)
		;

	return (x);
}
