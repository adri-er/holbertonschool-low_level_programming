#include "lists.h"
#include <stdio.h>

/**
 * list_len - gives the length of a list.
 * @h: pointer to a list.
 *
 * Return: size of the list.
 */
size_t list_len(const list_t *h)
{
	if (h != NULL)
	{
		return (1 + list_len(h->next));
	}
	return (0);
}
