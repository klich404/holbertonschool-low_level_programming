#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: is the head of the list
 * @n: is an integer
 * Return: *head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *new_last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		new_last = *head;
		while (new_last->next != NULL)
		{
			new_last = new_last->next;
		}
		new_last->next = new;
	}
	return (*head);
}
