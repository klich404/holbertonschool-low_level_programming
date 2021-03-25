#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: is the decimal number to convert
 * Return: the binary number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar(48 + (n & 1));
}
