#include "holberton.h"

/**
 * print_times_table - print the n table
 * @n: an int variable
 * Return: nothing
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n > 15 || n < 0)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > 99)
			{
				_putchar(z / 100 + 48);
				_putchar((z / 10 % 10) + 48);
				_putchar(z % 10 + 48);
			}
			else if (z > 9)
			{
				_putchar(32);
				_putchar(z / 10 + 48);
				_putchar(z % 10 + 48);
			}
			else if (y != 0)
			{
				_putchar(32);
				_putchar(32);
				_putchar(z + 48);
			}
			else
				_putchar(z + 48);

			if (y != n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
