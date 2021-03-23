#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the head of the list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = (*head)->next;
			(*head)->next = previous;
			previous = *head;
			*head = next;
		}
		*head = previous;
		return (*head);
	}
	else
	{
		return (NULL);
	}
}
