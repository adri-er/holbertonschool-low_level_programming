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
	dlistint_t *copy_head = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	for (; i < index && copy_head; i++)
		copy_head = copy_head->next;

	if (copy_head == NULL)
		return (-1);

	if (*head == copy_head)
	{
		*head = copy_head->next;
	}

	if (copy_head->next)
	{
		copy_head->next->prev = copy_head->prev;
	}

	if (copy_head->prev)
	{
		copy_head->prev->next = copy_head->next;
	}

	free(copy_head);
	return (1);
}
