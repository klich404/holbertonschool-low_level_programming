#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: is a pointer character
 * @f: is a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
		return;

	(*f)(name);
}
