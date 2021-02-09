#include "holberton.h"

/**
 * times_table - print the tables
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;

			if (z > 9)
			{
				_putchar(z / 10 + 48);
				_putchar(z % 10 + 48);
			}
			else if (y != 0)
			{
				_putchar(32);
				_putchar(z + 48);
			}
			else
			{
				_putchar(z + 48);
			}
			if (y != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
