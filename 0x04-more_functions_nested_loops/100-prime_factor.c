#include <stdio.h>
#include <math.h>

/**
 * main - Prints bigger prime factor
 * Description: Lok for biggest prime factor of a number
 * Return: 0.
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = sqrt(num); i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%ld\n", i);
			break;
		}
	}
	return (0);
