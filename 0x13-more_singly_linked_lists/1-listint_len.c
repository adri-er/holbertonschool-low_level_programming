#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - determines the number of elements in list.
 * @h: list from which elements will be numbered.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
