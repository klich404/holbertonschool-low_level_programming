#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the header node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		if (h->n != 00)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		else
		{
			h = h->next;
		}
	}
	return (x);
}
