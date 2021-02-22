#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: is a pointer
 * @c: is a char
 * Return: s or NULL
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
		return (0);
	}
}
