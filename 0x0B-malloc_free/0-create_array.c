#include "holberton.h"
#include <stdlib.h>

/**
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;
	
	if(size == 0)
		return (0);
	
	ptr = malloc(size*sizeof(char));
	
	if (ptr == 0)
		return (0);
	
	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
