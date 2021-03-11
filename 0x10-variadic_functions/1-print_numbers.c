#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: is a character pointer
 * @n: is an unsigned int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int print;
	va_list parameters;

	va_start(parameters, n);
	for (x = 0; x < n; x++)
	{
		print = va_arg(parameters, int);
		printf("%d", print);

		if (separator != 0)
		{
			if (x != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(parameters);
}
