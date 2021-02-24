#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: is a pointer
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == 00)
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}
