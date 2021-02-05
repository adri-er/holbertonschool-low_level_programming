#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int bs, bs2;

	for (bs = 0; bs <= 99; bs++)
	{
		for (bs2 = bs; bs2 <= 99; bs2++)
		{
			if (bs != bs2)
			{
				putchar(bs / 10 + '0');
				putchar(bs % 10 + '0');
				putchar(' ');
				putchar(bs2 / 10 + '0');
				putchar(bs2 % 10 + '0');

				if (bs != 98 || bs2 != 99)
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
