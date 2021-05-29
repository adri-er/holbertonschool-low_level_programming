#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table.
 * @ht: hash table set.
 * @key: key of the hash node to add.
 * @value: value associated with the key.
 *
 * Return: 1 if suceeds, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position = 0;
	hash_node_t *new_hash_node, *hash_node_list;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	position = key_index((const unsigned char *)key, ht->size);
	new_hash_node = malloc(sizeof(hash_node_t));
	new_hash_node->key = (char *)strdup(key);
	new_hash_node->value = (char *)strdup(value);
	if (new_hash_node == NULL || new_hash_node->key == NULL ||
		new_hash_node->value == NULL)
	{
		free(new_hash_node);
		free(new_hash_node->key);
		free(new_hash_node->value);
		return (0);
	}
	if (ht->array[position] == NULL)
	{
		ht->array[position] = new_hash_node;
		new_hash_node->next = NULL;
		return (1);
	}
	hash_node_list = ht->array[position];
	while (hash_node_list != NULL)
	{
		if (strcmp(hash_node_list->key, key) == 0)
		{
			free(new_hash_node->value);
			free(new_hash_node->key);
			free(new_hash_node);
			ht->array[position]->value = (char *)value;
			return (1);
		}
		hash_node_list = hash_node_list->next;
	}
	new_hash_node->next = ht->array[position];
	ht->array[position] = new_hash_node;
	return (1);
}
