#include <stdarg.h>

/**
 * sum_them_all - sum all its parameters.
 * @n: number of parameters introduced.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum = 0;
	unsigned int index;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);
	return (sum);
}
