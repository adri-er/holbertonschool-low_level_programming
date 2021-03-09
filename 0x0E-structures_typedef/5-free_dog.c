#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs from memory.
 * @d: pointer to the dog to free.
 *
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if !(d->owner)
		{
			free(d->owner);
		}
		if !(d->name)
		{
			free(d->name);
		}
		free(d);
	}
}
