#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list.
 * @head: head of the linked list.
 * @index: index of the node, starting at 0.
 *
 * Return: NULL if inexistent node, pointer to node otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_node = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current_node < index && head->next)
	{
		current_node++;
		head = head->next;
	}
	if (current_node == index)
	{
		return (head);
	}
	return (NULL);
}
