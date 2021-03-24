#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints all the elements of listint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: size of the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	int identifier = 3584;
	listint_t *copy = (listint_t *)head;

	if (head == NULL)
		return (size);
	while (copy != NULL)
	{
		if (copy->n != identifier)
		{
			printf("[%p] %d\n", (void *)copy, copy->n);
			copy->n = identifier;
			copy = copy->next;
			size++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)copy, copy->n);
			exit(98);
		}
	}
	return (size);
}
