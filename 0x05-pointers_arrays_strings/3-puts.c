#include "holberton.h"

/**
 * _puts - prints a string
 * @str: is a pointer
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
