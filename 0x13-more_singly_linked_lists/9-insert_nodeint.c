#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list to manipulate.
 * @idx: index of the list where new node is added, starts in 0.
 * @n: Value of n in the new node.
 *
 * Return: NULL if not possible to add, pointer to new node instead.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 1;
	listint_t *new_structure;
	listint_t *position = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (index < idx && position->next)
	{
		index++;
		position = position->next;
	}
	if (index == idx || idx == 0)
	{
		new_structure = malloc(sizeof(listint_t));
		if (new_structure == NULL)
		{
			return (NULL);
		}
		new_structure->n = n;
		if (idx == 0)
		{
			new_structure->next = position;
			*head = new_structure;
		}
		else
		{
			new_structure->next = position->next;
			position->next = new_structure;
		}
		return (new_structure);
	}
	return (NULL);
}
