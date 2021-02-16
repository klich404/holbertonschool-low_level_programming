#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: is a pointer
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != 00; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar(10);
}
