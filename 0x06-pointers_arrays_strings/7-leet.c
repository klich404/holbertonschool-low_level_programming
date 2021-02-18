#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: is a pointer
 * Return: str
 */

char *leet(char *str)
{
	char *orig, *repl;
	int x, y;

	orig = "aAeEoOtTlL";
	repl = "4433007711";

	for (x = 0; str[x] != 00; x++)
	{
		for (y = 0; orig[y] != 00; y++)
		{
			if (str[x] == orig[y])
			{
				str[x] = repl[y];
			}
		}
	}
	return (str);
}
