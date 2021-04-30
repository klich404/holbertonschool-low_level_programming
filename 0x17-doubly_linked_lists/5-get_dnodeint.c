#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head of the list
 * @index: the index node
 * Return:the index node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *headcopy;
	unsigned int x;

	headcopy = head;
	if (headcopy != NULL)
	{
		while (headcopy->prev != NULL)
			headcopy = headcopy->prev;

		for (x = 0; (x < index) && (headcopy != NULL); x++)
			headcopy = headcopy->next;
		return (headcopy);
	}

	else
		return (NULL);
}
