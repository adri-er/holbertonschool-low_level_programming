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
	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	return (1 + print_list(h->next));
	}
	return (0);
}
