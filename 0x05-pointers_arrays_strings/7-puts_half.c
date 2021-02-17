#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: pointer of a string to which half will be printed.
 *
 * Return: none
 */
void puts_half(char *str)
{
	int index, len = 0, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	for (index = n; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
