#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is an integer
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (revision(1, n));
}

/**
 * revision - returns the natural square root of a number
 * @x: is an integer
 * @y: is an integer
 * Return: the natural squeare root of a number
 */

int revision(int x, int y)
{
	if (x * x == y)
		return (x);

	if (x * x > y)
		return (-1);

	return (revision(x + 1, y));
}
