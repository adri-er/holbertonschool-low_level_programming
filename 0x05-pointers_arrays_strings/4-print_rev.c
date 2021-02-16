#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: pointer to a string to reverse
 *
 * Return: none
 */
void print_rev(char *s)
{
	int index, cant = 0;

	while (s[index] != '\0')
	{
		cant++;
		index++;
	}
	cant--;
	while (cant >= 0)
	{
		_putchar(s[cant]);
		cant--;
	}
	_putchar('\n');
}
