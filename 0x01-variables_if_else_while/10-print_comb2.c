#include <stdio.h>

/**
 * main - print the number from 00 to 99
 * Return: 0
 */

int main(void)
{
	int x, y;


	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			putchar (x);
			putchar (y);
			if ((x + y) != 114)
			{
				putchar (44);
				putchar (32);
			}
		}
	}

	putchar (10);
	return (0);
}
