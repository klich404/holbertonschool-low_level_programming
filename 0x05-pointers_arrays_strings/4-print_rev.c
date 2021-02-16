#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: is a pointer
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != 00; x++)
	;

	x--;
	for (; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar(10);
}
