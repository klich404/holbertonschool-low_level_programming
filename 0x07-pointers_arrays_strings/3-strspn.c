#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: is a pointer
 * @accept: is a pointer
 * Return: z
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	for (x = 0; s[x] != 00 && s[x] != 32; x++)
	{
		for (y = 0; accept[y] != 00; y++)
		{
			if (s[x] == accept[y])
				z++;
		}
	}
	return (z);
}
