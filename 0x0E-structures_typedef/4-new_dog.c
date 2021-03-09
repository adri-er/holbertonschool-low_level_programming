#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);

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
	dog_t *new_dog_;
	char *name_c;
	char *owner_c;

	name_c = _strdup(name);
	if (name_c == NULL)
	{
		return (NULL);
	}
	owner_c = _strdup(owner);
	if (owner_c == NULL)
	{
		free(name_c);
		return (NULL);
	}
	new_dog_ = malloc(sizeof(dog_t));
	if (new_dog_ == NULL)
	{
		return (NULL);
	}
	new_dog_->name = name_c;
	new_dog_->age = age;
	new_dog_->owner = owner_c;
	return (new_dog_);
}

/**
 * _strdup - returns pointer to copy of a string given.
 * @str: string thats going to be copied in memory.
 *
 * Return: pointer to space in memory with copied string.
 */
char *_strdup(char *str)
{
	char *memory;
	int index, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	length++;
	memory = malloc(length * sizeof(char));
	if (memory != NULL)
	{
		for (index = 0; index < length; index++)
		{
			memory[index] = str[index];
		}
		length--;
		memory[length] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (memory);
}
