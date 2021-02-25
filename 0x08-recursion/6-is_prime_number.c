#include "holberton.h"

/**
 * is_prime_number - returns 1 n is a prime number, otherwise return 0
 * @n: is an integer
 * Return: the prime number of n
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else
		return (cal(n, n - 1));
}

/**
 * cal - calculate the prime number of n
 * @x: is an integer
 * @y: is an integer
 * Return: a prime number
 */

int cal(int x, int y)
{
	if (y == 1)
		return (1);

	else
	{
		if (x % y == 0)
			return (0);

		else
			return (cal(x, y - 1));
	}
}
