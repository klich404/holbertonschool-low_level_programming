#include <stdio.h>

/**
 * main - print the alphabet except the e and the q
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x + 0);
		}
	}
	putchar (10);
	return (0);
}
