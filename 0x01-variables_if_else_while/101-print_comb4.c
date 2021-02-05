#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int bs, bs2, bs3;

	for (bs = 0; bs <= 9; bs++)
	{
		for (bs2 = bs + 1; bs2 <= 9; bs2++)
		{
			for (bs3 = bs2 + 1; bs3 <= 9; bs3++)
			{
				putchar(bs + '0');
				putchar(bs2 + '0');
				putchar(bs3 + '0');

				if (bs == 7 && bs2 == 8 && bs3 == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
