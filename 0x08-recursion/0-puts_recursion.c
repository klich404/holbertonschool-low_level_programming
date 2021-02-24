#include "holberton.h"

/**
 *
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
