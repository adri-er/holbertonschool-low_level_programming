#include "holberton.h"
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: pointer of a string to which half will be printed.
 *
 * Return: none
 */
void puts_half(char *str)
{
	int index, len;

	len = strlen(str);
	if (len % 2 != 0)
	{
		len--;
	}
	for (index = len / 2; index <= len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
