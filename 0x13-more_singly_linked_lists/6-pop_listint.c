#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: is the head of the list
 * Return: new->n
 */

int pop_listint(listint_t **head)
{
	listint_t *new;

	new = (*head)->next;

	if (new == NULL)
		return (0);

	free(*head);
	*head = new;
	return (new->n);
}
