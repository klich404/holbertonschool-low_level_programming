#include <stdio.h>

/**
 * main - print the numbers separates with a ", "
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar (x);
		if (x != 57)
		{
			putchar (44);
			putchar (32);
		}
	}

	putchar(10);
	return (0);
}
