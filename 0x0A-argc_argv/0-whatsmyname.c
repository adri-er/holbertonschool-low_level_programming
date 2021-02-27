#include "holberton.h"
#include <stdio.h>

/**
 * main - prints program name.
 * @argc: counter of arguments.
 * @argv: vector of strings in arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
