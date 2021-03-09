#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: is a pointer
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", (d->name == 0) ? ("nil") : d->name);
		printf("Age: %f\n", (d->age < 0) ? ("nil") : d->age);
		printf("Owner %s\n", (d->owner == 0) ? ("nil") : d->owner);
	}
	else
		return;
}
