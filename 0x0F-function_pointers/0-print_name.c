#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: The name that wants to be printed.
 * @f: function pointer.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
