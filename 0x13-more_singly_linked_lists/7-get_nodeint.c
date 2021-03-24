#include "lists.h"

/**
 * get_nodeint_a - returns the nth node of a listint_t linked list.
 * @head: is the head of the list
 * @index: is the node of the list who whe want to return
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x <= index; x++)
	{
		if (head == NULL)
			return (NULL);

		if (x == index)
			return (head);

		head = head->next;
	}

	return (head);
}
