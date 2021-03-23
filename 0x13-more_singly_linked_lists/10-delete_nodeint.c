#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of node that will be deleted, starts in 0.
 *
 * Return: 1 if succeeded, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *position = *head;
	listint_t *delete;
	unsigned int current_index = 1;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	while (position && current_index < index)
	{
		current_index++;
		position = position->next;
	}
	if (position->next && current_index == index)
	{
		delete = position->next;
		position->next = (position->next)->next;
		free(delete);
		return (1);
	}
	if (index == 0 && position)
	{
		delete = position;
		*head = position->next;
		free(delete);
		return (1);
	}
	return (-1);
}
