#include "lists.h"

/**
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *new;

	new = (*head)->next;

	if (new == NULL)
		return (0);

	free(*head);
	*head = new;
	return(new->n);
}
