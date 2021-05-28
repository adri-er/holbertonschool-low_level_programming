#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table from which value will be searched.
 * @key: key to search for.
 *
 * Return: value associated with the element, or NULL not be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int position;
	hash_node_t *hash_node_list;

	if (ht == NULL || key == NULL || key == '\0')
	{
		return (NULL);
	}
	position = key_index((const unsigned char *)key, ht->size);
	hash_node_list = ht->array[position];
	while (hash_node_list != NULL)
	{
		if (strcmp(hash_node_list->key, key) == 0)
		{
			return (ht->array[position]->value);
		}
		hash_node_list = hash_node_list->next;
	}
	return (NULL);
}
