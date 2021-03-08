#include <stdio.h>

/**
 * main - prints the file from in was compiled.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n",__BASE_FILE__);
	return (0);
}
