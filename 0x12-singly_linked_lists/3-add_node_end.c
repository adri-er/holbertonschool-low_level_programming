#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds new node at the end of list.
 * @head: head of the list, where it starts.
 * @str: string to copy in the new node.
 *
 * Return: address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last = *head;
	int index;
	char *str_copy;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	str_copy = strdup(str);
	new_node->str = str_copy;
	for (index = 0; str_copy[index]; index++)
	{
	}
	new_node->len = index;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
