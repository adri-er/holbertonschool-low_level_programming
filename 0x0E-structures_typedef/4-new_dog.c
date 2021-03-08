#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that creates a new dog.
 * @name: Name of new dog.
 * @age: Age of new dog.
 * @owner: Owner of new dog.
 *
 * Return: NULL if fails, pointer to new structure instead.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_c = name;
	char *owner_c = owner;

	name_c = malloc(sizeof(char *));
	if (name_c == NULL)
	{
		return (NULL);
	}
	owner_c = malloc(sizeof(char *));
	if (owner_c == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name_c;
	new_dog->age = age;
	new_dog->owner = owner_c;
	return (new_dog);
}
