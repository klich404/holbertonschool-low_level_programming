#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: is an unsigned int
 * Return: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sumar, sum;
	va_list parameters;

	va_start(parameters, n);
	if (n == 0)
		return (0);

	sum = 0;
	for (x = 0; x < n; x++)
	{
		sumar = va_arg(parameters, int);
		sum += sumar;
	}
	va_end(parameters);
	return (sum);
}
