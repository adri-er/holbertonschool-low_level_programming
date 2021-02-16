#include "holberton.h"

/**
 * puts2 - prints every other character of a string.
 * @str: string from which you want to print.
 *
 * Return: none
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index = index + 2;
	}
	_putchar('\n');
}
