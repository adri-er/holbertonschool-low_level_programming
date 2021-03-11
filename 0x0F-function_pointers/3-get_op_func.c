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

	if (s[1] != '\0')
	{
		return (NULL);
	}
	i = ((s[0] == (ops[0].op)[0]) ? 0 : ((s[0] == (ops[1].op)[0])
						     ? 1 : ((s[0] == (ops[2].op)[0]) ? 2 : ((s[0] == (ops[3].op)[0])
											    ? 3 : ((s[0] == (ops[4].op)[0]) ? 4 : 5)))));

	return (ops[i].f);
}

