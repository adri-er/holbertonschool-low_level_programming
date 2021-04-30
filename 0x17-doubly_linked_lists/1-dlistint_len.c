#include "lists.h"

/**
 * dlistint_len - Determines the number of nodes.
 * @h: pointer to head of the list.
 *
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
