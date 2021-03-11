#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the result of the opertion.
 * @argc: number of elements introduced.
 * @argv: array with elements introduced.
 *
 * Return: 0 always;
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int num_1 = atoi(argv[1]);
	int num_2 = atoi(argv[3]);
	char operator = *argv[2];

	if (argv == NULL || argv[1] == NULL || argv[2] == NULL || argv[3] == NULL)
	{
		return (0);
	}
	if (num_2 == 0 && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p(num_1, num_2));
	return (0);
}
