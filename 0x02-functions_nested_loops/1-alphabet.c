#include "holberton.h"

/**
 * print_alphabet - printf the alphabeth
 */

void print_alphabet(void)
{
	char x;

	for (x = 97; x < 123; x++)
	{
		_putchar (x + 0);
	}
	_putchar (10);
}
