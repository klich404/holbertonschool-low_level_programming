#include "holberton.h"

/**
 * string_toupper - capitalizes all words of a string
 * @arr: is a pointer
 * Return: arr
 */

char *string_toupper(char *arr)
{
	int x;
	int y = 97 - 65;

	for (x = 0; arr[x] != 00; x++)
	{
		if (arr[x] >= 97 && arr[x] <= 122)
		{
			arr[x] = arr[x] - y;
		}
	}
	return (arr);
}
