#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: is a pointer
 * @accept: is a pointer
 * Return: s + x
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != 00; x++)
	{
		for (y = 0; accept[y] != 00; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return (0);
}
