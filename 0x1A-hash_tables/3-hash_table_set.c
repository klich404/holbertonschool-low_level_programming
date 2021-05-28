#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key, string
 * @value: The value corresponding to a key
 * Return: a int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *copy = NULL;
	unsigned long int index;
	char *value_copy = strdup(value);

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	copy = ht->array[index];

	while (copy)
	{
		if (strcmp(copy->key, key) == 0)
		{
			free(copy->value);
			copy->value = value_copy;
			return (1);
		}
		copy = copy->next;
	}

	new = add_node(key, value);
	if (new == NULL)
		return (0);

	new->next = (ht->array)[index];
	(ht->array)[index] = new;
	return (1);
}

/**
 * add_node - add a node
 * @key: the key, string
 * @value: The value corresponding to a key
 * Return: a hash table
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
