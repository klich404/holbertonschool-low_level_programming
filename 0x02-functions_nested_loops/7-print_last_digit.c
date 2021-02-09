#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: an int variable
 * Return: the las digit of a number
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = (n % 10) * -1;
		_putchar(x + 48);
		return (x);
	}
	else
	{
		x = n % 10;
		_putchar(x + 48);
		return (x);
	}
}
