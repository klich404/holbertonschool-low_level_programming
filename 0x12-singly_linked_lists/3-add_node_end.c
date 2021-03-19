#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: is a list_t variable
 * @str: is a string
 * Return: *head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *new_last;
	size_t x;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (x = 0; new->str[x] != 00; x++)
		;
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

	new->len = x;
	return (*head);
}
