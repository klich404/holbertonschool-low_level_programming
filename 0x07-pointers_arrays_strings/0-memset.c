#include "holberton.h"

/**
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; n--)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
