#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: an integer
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
