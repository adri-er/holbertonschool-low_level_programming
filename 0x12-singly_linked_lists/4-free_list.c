#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: the pointer to the head of the list.
 *
 * Return: None.
 */
void free_list(list_t *head)
{
	list_t *temp, *next_node;

	temp = head;
	while (temp)
	{
		next_node = temp->next;
		free(temp->str);
		free(temp);
		temp = next_node;
	}
}
