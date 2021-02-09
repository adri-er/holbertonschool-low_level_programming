#include <stdio.h>
#include "holberton.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - Function that prints the alphabet 10 times
 *
 * Returns: None
 */
void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
