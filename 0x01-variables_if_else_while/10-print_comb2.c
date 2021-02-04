#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int bs;
	int bs2;

	for (bs = 0; bs <= 9; bs++)
	{
		for (bs2 = 0; bs2 <= 9; bs2++)
		{
			putchar(bs + '0');
			putchar(bs2 + '0');

			if (bs == 9 && bs2 == 9)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
