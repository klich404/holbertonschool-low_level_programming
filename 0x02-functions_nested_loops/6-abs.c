#include "holberton.h"

/**
 * _abs - calculate the absolute valor
 * @n: an int variable
 * Return: the absolute valor of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
