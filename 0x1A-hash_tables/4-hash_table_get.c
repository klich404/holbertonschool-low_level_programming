#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key, string
 * Return: a char
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *seeker = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	seeker = ht->array[index];

	while (seeker != NULL)
	{
		if (strcmp(seeker->key, key) == 0)
			return (seeker->value);
		seeker = seeker->next;
	}
	return (NULL);
}
