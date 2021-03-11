#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *print;
	va_list parameters;

	va_start (parameters, n);
	for (x = 0; x < n; x++)
	{
		print = va_arg(parameters, char *);

		if (print == 0)
			print = "(nil)";

		printf("%s", print);

		if (separator != 0 && x != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(parameters);
}
