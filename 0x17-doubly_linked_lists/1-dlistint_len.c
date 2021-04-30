#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: the header node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		if (h->n != 00)
		{
			h = h->next;
		}
	}
	return (x);
}
