#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - free all the elements of listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *copy = *h;
	listint_t *temp = *h;

	if (h == NULL)
		return (size);
	while (copy != NULL)
	{
		temp = copy->next;
		free(copy);
		size++;
		copy = temp;
	}
	h = NULL;
	return (size);
}
