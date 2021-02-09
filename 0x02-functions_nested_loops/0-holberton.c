#include <stdio.h>
#include "holberton.h"

/**
 * main - print Holberton.
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch[] = "Holberton";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
