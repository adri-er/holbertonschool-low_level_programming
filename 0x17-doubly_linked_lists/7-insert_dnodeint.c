#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head of the linked list.
 * @idx: index of the list where the new node should be added.
 * @n: Value of the variable of the new node to add.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp_next, *first;
	unsigned int index = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	first = *h;
	while (*h)
	{
		if ((index + 1) == idx)
		{
			if ((*h)->next == NULL)
			{
				*h = first;
				return (add_dnodeint_end(h, n));
			}
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			new->n = n;
			temp_next = (*h)->next;
			new->prev = *h;
			new->next = temp_next;
			(*h)->next->prev = new;
			(*h)->next = new;
			*h = first;
			return (new);
		}
		index++;
		*h = (*h)->next;
	}
	*h = first;
	return (NULL);
}
