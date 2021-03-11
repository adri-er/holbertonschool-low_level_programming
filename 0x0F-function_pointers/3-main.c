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

	if (num_2 == 0 && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (argc != 4 || (num_1 == 0 && argv[1][0] != '0') || (num_2 == 0 && argv[3][0] != '0'))
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
