#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: is a character
 * Return: palindrome function
 */

int is_palindrome(char *s)
{
	int len;

	len = length(s, 0);
	return (palindrome(s, len, 0));
}

/**
 * length - identifies the length of a string
 * @s: is a pointer
 * @x: is an integer
 * Return: the length of a string
 */

int length(char *s, int x)
{
	if (s[x] != 00)
		return (length(s, x + 1));

	else
		return (x - 1);
}

/**
 * palindrome - calculate if a string is palindrome
 * @s: is a pointer
 * @len: is a function
 * @y: is an integer
 * Return: 1 or 0
 */

int palindrome(char *s, int len, int y)
{
	if (s[y] == s[len])
		return (palindrome(s, len - 1, y + 1));

	else if (s[y] == s[len] || y > len)
		return (1);

	else if (s[y] != s[len])
		return (0);

	else
		return (0);
}
