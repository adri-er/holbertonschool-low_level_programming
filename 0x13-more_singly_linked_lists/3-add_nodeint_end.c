#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at the end of a listint_t list.
 * @head: head of a list.
 * @n: value of number in the new node.
 *
 * Return: adress of element or null if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
