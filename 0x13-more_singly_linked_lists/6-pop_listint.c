#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: is the head of the list
 * Return: new->n
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int x;

	if (*head != NULL)
	{
		new = *head;
		*head = new->next;
		x = new->n;
		free(new);
		return (x);
	}
	return (0);
}
