#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: an integer
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
