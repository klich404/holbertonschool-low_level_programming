#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 122; x > 96; x--)
	{
		putchar (x + 0);
	}

	putchar (10);
	return (0);
}
