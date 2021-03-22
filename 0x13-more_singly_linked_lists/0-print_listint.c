#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: is a listint_t variable
 * Return: x
 */

size_t print_listint(const listint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		if (h != NULL)
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
