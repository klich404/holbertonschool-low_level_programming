#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: the head of the list
 * Return: the sum of the content of the node or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		sum = sum + head->n;
		return (sum);
	}
	else
		return (0);
}
