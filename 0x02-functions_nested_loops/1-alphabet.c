#include "holberton.h"

/**
 * print_alphabet -  prints alphabet in lowercase
 *
 * Return: None
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
