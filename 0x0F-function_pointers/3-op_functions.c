#include "3-calc.h"

/**
 * op_add - Adds two parameters.
 * @a: first number to add.
 * @b: second number to add.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two parameters.
 * @a: first number to subtract from.
 * @b: second number to subtract with.
 *
 * Return: substract b from a.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two parameters.
 * @a: first number to multiply.
 * @b: second number to multiply.
 *
 * Return: multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two parameters.
 * @a: numerator.
 * @b: denominator.
 *
 * Return: Division of numerator over denominator.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates remainder of division.
 * @a: numerator.
 * @b: denominator.
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
