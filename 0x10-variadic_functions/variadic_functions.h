#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void character(va_list print);
void integer(va_list print);
void floatt(va_list print);
void string(va_list print);

/**
 * struct form - search the format
 * @ident: the identifier
 * @f: the function
 */
typedef struct form
{
	char *ident;
	void (*f)(va_list);
} fm_t;

#endif
