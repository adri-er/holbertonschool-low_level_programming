#include "holberton.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse.
 * @s: pointer to a string to reverse
 *
 * Return: none
 */
void print_rev(char *s)
{
	int cant;

	cant = strlen(s) - 1;
	while (cant >= 0)
	{
		_putchar(s[cant]);
		cant--;
	}
	_putchar('\n');
}
