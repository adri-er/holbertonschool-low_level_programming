#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - get the pointer to the function of interest.
 * @s: operator passed as argument.
 *
 * Return: pointer to function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s != NULL)
	{
		i = ((s == (ops[0].op)) ? 0 : ((s == (ops[1].op)) ? 1 : ((s == (ops[2].op))
? 2 : ((s == (ops[3].op)) ? 3 : ((s == (ops[4].op)) ? 4 : 5)))));
		return (ops[i].f);
	}
	return (NULL);
}
