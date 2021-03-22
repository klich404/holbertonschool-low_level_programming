#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: is a list_t variable
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
}
