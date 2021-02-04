#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int bs;

	for (bs = 0; bs <= 9; bs++)
	{
		putchar(bs + '0');
	}
	putchar('\n');
	return (0);
}
