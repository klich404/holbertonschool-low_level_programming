#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 */

void jack_bauer(void)
{
	char x, y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar(x / 10 + 48);
			_putchar(x % 10 + 48);
			_putchar(58);
			_putchar(y / 10 + 48);
			_putchar(y % 10 + 48);
			_putchar(10);
		}
	}
}
