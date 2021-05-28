#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: key to look for in the hash table.
 * @size: size of the array in the hashtable.
 *
 * Return: index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	if (key == NULL || size <= 0)
	{
		exit(EXIT_FAILURE);
	}
	return (hash_djb2(key) % size);
}
