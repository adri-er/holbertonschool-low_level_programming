#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: pointer of a string to which half will be printed.
 *
 * Return: none
 */
void puts_half(char *str)
{
	int counter, index, len, n;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	len = counter;
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
