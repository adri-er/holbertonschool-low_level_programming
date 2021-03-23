#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of valaues in listint_t linked list.
 * @head: head of the linked list.
 *
 * Return: sum of the values in the list.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
