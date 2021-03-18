#include "lists.h"

/**
 *
 */

size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		if(h != NULL)
		{
			h = h->next;
		}
	}
	return (x);
}
