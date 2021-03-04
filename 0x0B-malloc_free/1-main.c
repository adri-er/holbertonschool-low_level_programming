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
	char *s, *m, *n;

	s = _strdup("Holberton");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	m = _strdup("");
	if (m == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s ..\n", m);
	free(m);

	n = _strdup(NULL);
	if (n == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s ..\n", n);
	free(n);
	
	return (0);
}
