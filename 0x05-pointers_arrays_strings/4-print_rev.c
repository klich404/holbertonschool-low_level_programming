#include "holberton.h"

/**
 *
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != 00; x++)
	;

	for (; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar(10);
}
