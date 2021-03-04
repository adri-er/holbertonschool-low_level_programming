#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void printm(char *);
int check(char *);

/**
 * main - multiplies two positive numbers.
 * @argc: amount of arguments.
 * @argv: values of each argument introduced.
 *
 * Return: 0 if works, 1 any other case.
 */
int main(int argc, char *argv[])
{
	char *memory;
	char *s = "Error";
	long int result, value, size, index;

	if (argc != 3 || !check(argv[1]) || !check(argv[2]))
	{
		printm(s);
		exit(98);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	value = result;

	for (size = 0; result / 10; size++)
	{
		result = result / 10;
	}
	size++;
	memory = malloc(sizeof(char) * size + 1);
	if (memory == NULL)
	{
		return (1);
	}
	size--;
	for (index = 0; index <= size; index++)
	{
		memory[size - index] = (value % 10 + '0');
		value = value / 10;
	}
	memory[index] = '\n';
	printm(memory);
	free(memory);
	return (0);
}

/**
 * printm - print message from pointer.
 * @str: string to print.
 *
 * Return: None.
 */
void printm(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\0');
}

/**
 * check - check if number.
 * @num: Numer to check.
 *
 * Return: None.
 */
int check(char *num)
{
	int index, rsp = 1;

	for (index = 0; num[index]; index++)
	{
		if (num[index] < 48 || num[index] > 57)
		{
			rsp = 1;
			break;
		}
	}
	return (rsp);
}
