#include "holberton.h"

/**
 * _islower - identifies lowercase letters
 * @c: it's a int variable
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
