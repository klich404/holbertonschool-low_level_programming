#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: is a list_t
 * Return: x
 */

size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
	}
	return (x);
}
