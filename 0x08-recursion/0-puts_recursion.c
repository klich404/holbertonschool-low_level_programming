#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: is a pointer
 */

void _puts_recursion(char *s)
{
	if (*s != 00)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar(10);
}
