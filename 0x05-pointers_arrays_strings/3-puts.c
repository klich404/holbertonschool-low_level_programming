#include "holberton.h"

/**
 *
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != 00; x++)
	{
		_putchar(str[x]);
	}
	_putchar(10);
}
