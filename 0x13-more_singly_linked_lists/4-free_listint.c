#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t.
 * @head: pointer to the head of listint_t list.
 *
 * Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
