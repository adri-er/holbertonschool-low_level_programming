#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list.
 *
 * Return: size of the list.
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *copy = h;

	for (; copy != NULL; size++)
	{
		if (copy->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", copy->len, copy->str);
		}
		copy = copy->next;
	}

	return (size);
}
