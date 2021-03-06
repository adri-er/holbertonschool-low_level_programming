#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: pointer of a string to which half will be printed.
 *
 * Return: none
 */
void puts_half(char *str)
{
	int len, n;
	char *half = str;
	char *end = str;

	len = 0;
	while (*end != '\0')
	{
		len++;
		end++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		n++;
	}
	else
	{
		n = len / 2;
	}
	half += n;
	while (*half != '\0')
	{
		_putchar(*half);
		half++;
	}
	_putchar('\n');
}
