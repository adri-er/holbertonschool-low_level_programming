#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n % 10;
	if (u > 5)
	{
		printf("Last digit of %d is", n);
		printf("%d", u);
		printf("%s", "and is greater than 5\n");
	}
	if (u == 0)
	{
		printf("%s %d %s %d %s", "Last digit of", n, "is", u, "and is 0\n");
	}
	if (u < 6 && u != 0)
	{
		printf("Last digit of %d is", n);
		printf("%d", u);
		printf("%s", "and is less than 6 and not 0\n");
	}
	return (0);
}
