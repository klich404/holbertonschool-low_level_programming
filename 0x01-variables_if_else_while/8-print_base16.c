#include <stdio.h>

/**
 * main - print the numbers on base 16
 * Return: 0
 */

int main(void)
{
	int x;
	char y;

	for (x = 48; x < 58; x++)
	{
		putchar (x + 0);
	}
	for (y = 97; y < 103; y++)
	{
		putchar (y);
	}

	putchar (10);
	return (0);
}
