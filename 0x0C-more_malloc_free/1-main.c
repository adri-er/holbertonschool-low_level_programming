#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;
	int index;

	concat = string_nconcat("Holberton ", "School !!!", 1);
	printf("%s\n", concat);

	for (index = 0; concat[index]; index++)
	{
	}

	printf("%d", index);
	free(concat);
	return (0);
}
