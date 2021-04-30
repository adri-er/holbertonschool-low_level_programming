#include "lists.h"

/**
 * delete_dnodeint_at_index - remove node at index of dlistint_t linked list.
 * @head: pointer to the head of a linked list.
 * @index: index of node that should be deleted, starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp_next, *first = *head;

	if (head == NULL || *head == NULL)
		return (0);
	if (index == 0)
	{
		temp_next = *head;
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		temp_next->next = NULL;
		free(temp_next);
		return (1);
	}
	while (*head)
	{
		if ((i + 1) == index)
		{
			if ((*head)->next != NULL)
			{
				temp_next = (*head)->next;
				(*head)->next->next->prev = *head;
				(*head)->next = (*head)->next->next;
				temp_next->prev = NULL;
				temp_next->next = NULL;
				free(temp_next);
				*head = first;
				return (1);
			}
			else
			{
				*head = first;
				return (0);
			}
		}
		*head = (*head)->next;
		i++;
	}
	*head = first;
	return (0);
}
