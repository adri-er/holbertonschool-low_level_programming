#include "lists.h"

/**
 * get_dnodeint_at_index - gives the address of the nth node.
 * @head: pointer to the head of the linked list.
 * @index: index of the node, starting from 0.
 *
 * Return: nth node of a dlistint_t linked list, if node doesn't exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_num = 0;

	while (head)
	{
		if (node_num == index)
		{
			return (head);
		}
		node_num++;
		head = head->next;
	}
	return (NULL);
}
