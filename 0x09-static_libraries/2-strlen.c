#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to a string
 * Return: none
 */
int _strlen(char *s)
{
	int index, contador;

	index = 0;
	contador = 0;
	while (s[index] != '\0')
	{
		contador++;
		index++;
	}
	return (contador);
}
