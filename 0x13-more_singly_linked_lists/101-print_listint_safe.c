#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints all the elements of a list_t list.
 * @head: pointer to the head of the list.
 *
 * Return: size of the list.
 */
size_t print_listint_safe(const listint_t *head)
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
