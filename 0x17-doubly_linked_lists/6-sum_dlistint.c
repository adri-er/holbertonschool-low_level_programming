#include "lists.h"

/**
 * sum_dlistint - sum all data of a dlistint_t linked list.
 * @head: pointer to head of a linked list.
 *
 * Return: Sum of the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
