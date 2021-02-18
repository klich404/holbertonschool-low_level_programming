#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: is a pointer
 * Return: str
 */

char *rot13(char *str)
{
	int x;

	for (x = 0; str[x] != 00; x++)
	{
		for (; (str[x] >= 65 && str[x] <= 90) ||
		     (str[x] >= 97 && str[x] <= 122); x++)
		{
			if ((str[x] >= 65 && str[x] <= 77) || (str[x] >= 97 && str[x] <= 109))
			{
				str[x] += 13;
			}
			else
			{
				str[x] -= 13;
			}
		}
	}
	return (str);
}
