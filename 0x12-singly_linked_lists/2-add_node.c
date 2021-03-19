#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head is a list_t variable
 * @str: is a string
 * Return: *head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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

	new->len = x;
	new->next = *head;
	*head = new;
	return (*head);
}
