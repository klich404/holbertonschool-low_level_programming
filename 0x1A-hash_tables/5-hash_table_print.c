#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			if (flag == 0)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				flag = 1;
			}
			else
			{
				printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
			}
		}
		i++;
	}
	printf("}\n");
}
