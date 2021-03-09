#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog
 * @name: is a pointer character
 * @age: is a float
 * @owner: is a pointer character
 * Return: DJ_ango or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *DJ_ango;
	int x, y, z;
	char *n, *o;

	DJ_ango = malloc(sizeof(struct dog));
	if (DJ_ango == 0)
		return (0);

	for (x = 0; name[x] != 00; x++)
		;
	for (y = 0; owner[y] != 00; y++)
		;

	n = malloc(sizeof(char) * x + 1);
	if (n == 0)
	{
		free(DJ_ango);
		return (0);
	}

	o = malloc(sizeof(char) * y + 1);
	if (o == 0)
	{
		free(n);
		free(DJ_ango);
		return (0);
	}

	for (z = 0; z <= x; z++)
		n[z] = name[z];
	for (z = 0; z <= y; z++)
		o[z] = owner[z];

	DJ_ango->name = n;
	DJ_ango->age = age;
	DJ_ango->owner = o;
	return (DJ_ango);
}
