#include "holberton.h"

/**
 * print_alphabet_x10 - Function that prints the alphabet 10 times
 *
 * Returns: None
 */
void print_alphabet_x10(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
