#include "holberton.h"

/**
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != 00)
		s++;

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return 0;
	}
}
