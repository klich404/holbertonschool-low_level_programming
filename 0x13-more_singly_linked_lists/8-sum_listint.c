#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: is the head of the list
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
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
