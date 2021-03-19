#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node at beginning of list.
 * @head: the first pointer to access the list.
 * @str: the string in the str element of new node.
 *
 * Return: Address of the new element, or NULL if fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;
	char *str_duplicate = strdup(str);

	new_node = malloc(sizeof(list_t));
	new_node->str = str_duplicate;
	for (i = 0; str_duplicate[i]; i++)
	{
	}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
