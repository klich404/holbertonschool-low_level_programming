#include "holberton.h"

/**
 * puts_half -  prints half of a string
 * @str: is a pointer
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != 00; x++)
		;

	if (x % 2 == 0)
	{
		for (x /= 2; str[x] != 00; x++)
		{
			_putchar(str[x]);
		}
		_putchar(10);
	}
	else
	{
		x++;
		for (x /= 2; str[x] != 00; x++)
		{
			_putchar(str[x]);
		}
		_putchar(10);
	}
}
