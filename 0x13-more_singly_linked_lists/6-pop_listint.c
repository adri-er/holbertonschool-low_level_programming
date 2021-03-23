#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of listint_t list.
 * @head: head of the linked list.
 *
 * Return: head node data, n.
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int value = 0;

	if (*head == NULL || head == NULL)
	{
		return (value);
	}
	temporary = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(temporary);

	return (value);
}
