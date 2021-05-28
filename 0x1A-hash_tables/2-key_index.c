#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key, string
 * @size: the size of the array
 * Return: a unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
