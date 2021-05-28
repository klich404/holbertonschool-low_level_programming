#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
		free_array_index(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
 * free_array_index - free a list
 * @head: the head of the list
 */

void free_array_index(hash_node_t *head)
{
	hash_node_t *save = NULL;

	while (head != NULL)
	{
		save = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = save;
	}
	free(save);
}
