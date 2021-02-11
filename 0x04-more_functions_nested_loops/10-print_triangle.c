#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
				_putchar(32);

			for (y = 0; y < x; y++)
				_putchar(35);

			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
