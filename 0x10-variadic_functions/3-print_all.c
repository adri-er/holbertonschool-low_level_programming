#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: None.
 */
void print_all(const char * const format, ...)
{
	va_list all_entries;
	char letter, *s;
	unsigned int index = 0;

	va_start(all_entries, format);
	while (format[index] && format != NULL)
	{
		letter = format[index];
		switch (letter)
		{
		case 'c':
			printf("%c", va_arg(all_entries, int));
			break;
		case 's':
			s = va_arg(all_entries, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		case 'i':
			printf("%d", va_arg(all_entries, int));
			break;
		case 'f':
			printf("%f", va_arg(all_entries, double));
			break;
		}
		if (format[index + 1] && (letter == 'c'
|| letter == 's' || letter == 'i' || letter == 'f'))
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
	va_end(all_entries);
}
