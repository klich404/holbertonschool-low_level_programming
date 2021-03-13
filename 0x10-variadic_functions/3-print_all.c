#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int x = 0, y = 0;
	char *sep = "";

	fm_t sea_for[] = {
		{"c", character},
		{"i", integer},
		{"f", floatt},
		{"s", string},
		{NULL, NULL}
	};

	va_start(arg, format);

	while (format[x] != 00 && format != 0)
	{
		while (sea_for[y].ident != 0)
		{
			if (sea_for[y].ident[0] == format[x])
			{
				printf("%s", sep);
				sea_for[y].f(arg);
				sep = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}
	va_end(arg);
	printf("\n");
}

/**
 * character - print a character
 * @print: the caracter
 */
void character(va_list print)
{
	printf("%c", va_arg(print, int));
}

/**
 * integer - print an integer
 * @print: the integer
 */
void integer(va_list print)
{
	printf("%d", va_arg(print, int));
}

/**
 * floatt - print a float
 * @print: the float
 */
void floatt(va_list print)
{
	printf("%f", va_arg(print, double));
}

/**
 * string - print a string
 * @print: the string
 */
void string(va_list print)
{
	char *printt = va_arg(print, char *);

	if (printt == 0)
	{
		printf("(nil)");
		return;
	}
	printf("%s", printt);
}
