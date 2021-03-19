#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: is a struct variable
 * Return: x
 */

size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		if (h != NULL)
		{
			h = h->next;
		}
	}
	return (x);
}
