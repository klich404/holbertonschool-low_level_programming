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
		printf("Name: ");
		d->name == 0 ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: ");
		d->age < 0 ? printf("(nil)\n") : printf("%f\n", d->age);
		printf("Owner: ");
		d->owner == 0 ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
	else
		return;
}
