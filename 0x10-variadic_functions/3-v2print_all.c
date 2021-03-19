#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: None.
 */
void print_all(const char * const format, ...)
{
	va_list all_entries;
	unsigned int i = 0, i_2 = 0; length = 0;
	void *data;

	while (format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			length++;
		}
		i++;
	}
	va_start(all_entries, length);
	while (i_2 < i)
	{
		void (*p)(void *) = get_func(format[i_2]);
		if (p != NULL)
		{
			data = &va_arg(all_entries, void);
			p(data);
		}
		i_2++;
	}
}

typedef struct prtype
{
	char typeof;
	void (*f)(void *data);
} print_type;

void (*get_func(char s))(void *data)
{
	int i = 0;
	print_type tps[] = {
{'c', imp_char},
{'f', imp_float},
{'s', imp_string},
{'i', imp_int},
{NULL, NULL}};

	while (tps[i].typeof)
	{
		if (tps[i].typeof == s)
		{
			return (tps[i].f);
		}
	}
	return (NULL);
}

void imp_string(void *string)
{
	printf("%s", string);
}

void imp_char(void *string)
{
	printf("%c", string);
}

void imp_int(void *number)
{
	printf("%d", number);
}

void imp_float(void *number)
{
	printf("%f", number);
}
