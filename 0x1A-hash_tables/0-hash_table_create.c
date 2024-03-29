#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **head = NULL;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;

	head = malloc(sizeof(hash_node_t *) * size);
	if (head == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		head[i] = NULL;

	ht->array = head;

	return (ht);
}
