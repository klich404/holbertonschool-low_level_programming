#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: is a listint variable
 * Return: x
 */

size_t listint_len(const listint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		if (h != NULL)
			h = h->next;
	}
	return (x);
}
