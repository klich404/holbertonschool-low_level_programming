#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two integers
 * @a: is an integer
 * @b: is an integer
 * Return: r
 */
int op_add(int a, int b)
{
	int r;

	r = a + b;
	return (r);
}

/**
 * op_sub - sub two integers
 * @a: is an integer
 * @b: is an integer
 * Return: r
 */
int op_sub(int a, int b)
{
	int r;

	r = a - b;
	return (r);
}

/**
 * op_mul - mul two integers
 * @a: is an integer
 * @b: is an integer
 * Return: r
 */
int op_mul(int a, int b)
{
	int r;

	r = a * b;
	return (r);
}

/**
 * op_div - div two integers
 * @a: is an integer
 * @b: is an integer
 * Return: r
 */
int op_div(int a, int b)
{
	int r;

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	r = a / b;
	return (r);
}

/**
 * op_mod - mod two integers
 * @a: is an integer
 * @b: is an integer
 * Return: r
 */
int op_mod(int a, int b)
{
	int r;

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	r = a % b;
	return (r);
}
