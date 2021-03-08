#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a data structure
 * @name: is a character
 * @age: is a float
 * @owner: is a char
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
