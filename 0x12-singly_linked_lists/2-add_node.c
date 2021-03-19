#include "lists.h"

/**
 *
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
		return (NULL);

	for (x = 0; new->str[x] != 00; x++)
		;

	new->len = x;
	new->next = *head;
	*head = new;
	return (*head);
}
