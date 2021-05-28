#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hashtable to print.
 *
 * Return: None.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, counter = 0, printed = 0;
	hash_node_t *node_list;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			counter++;
		i++;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{	printed++;
			node_list = ht->array[i];
			if (node_list->next != NULL)
			{
				printf("{");
				while (node_list)
				{
					printf("'%s': '%s'", node_list->key, node_list->value);
					if (node_list->next != NULL)
						printf(", ");
					node_list = node_list->next;
				}
				printf("}");
				if (printed < counter)
					printf(", ");
			}
			else
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				if (printed < counter)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
