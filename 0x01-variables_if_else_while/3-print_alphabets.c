#include <stdio.h>

/**
 * main - printf the alphabet in lowercase and in uppercase
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 97; x < 123; x++)
	{
		putchar (x + 0);
	}
	for (x = 65; x < 91; x++)
	{
		putchar (x + 0);
	}

	putchar (10);
	return (0);
}
