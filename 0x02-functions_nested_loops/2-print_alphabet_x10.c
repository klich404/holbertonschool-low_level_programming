#include "holberton.h"

/**
 * print_alphabet_x10 - printf the alphabeth
 */

void print_alphabet_x10(void)
{
	int y;
	char x;

	for (y = 0; y < 10; y++)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar (x + 0);
		}
		_putchar(10);
	}
}
