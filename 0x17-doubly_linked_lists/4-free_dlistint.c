#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *headcopy;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			headcopy = head->next;
			free(head);
			head = headcopy;
		}
	}
}
