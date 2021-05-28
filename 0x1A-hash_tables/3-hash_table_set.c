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
	hash_node_t *new_hash_node;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	position = key_index((const unsigned char *)key, ht->size);
	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
	{
		return (0);
	}
	new_hash_node->key = (char *)key;
	new_hash_node->value = (char *)strdup(value);
	if (new_hash_node->value == NULL)
		return (0);

	if (ht->array[position] == NULL)
	{
		ht->array[position] = new_hash_node;
		new_hash_node->next = NULL;
		return (1);
	}
	new_hash_node->next = ht->array[position];
	ht->array[position] = new_hash_node;
	return (1);
}
