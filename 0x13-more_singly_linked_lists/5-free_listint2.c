#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: is a list_t variable
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			x = (*head)->next;
			free(*head);
			*head = x;
		}
		free(*head);
		*head = NULL;
	}
}
