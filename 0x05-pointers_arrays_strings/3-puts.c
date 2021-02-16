#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: pointer to the string to print.
 *
 * Return: none
 */
void _puts(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
