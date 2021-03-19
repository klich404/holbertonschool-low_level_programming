#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: is a list_t variable
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			free(head->str);
			free(head);
			head = head->next;
		}
		free(head->str);
		free(head);
	}
}
