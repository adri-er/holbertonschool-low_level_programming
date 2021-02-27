#include "holberton.h"

/**
 *_isdigit - checks for a digit (0 through 9)
 *@c: integer to check if is digit
 *
 *Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	int resp = 0;

	if (c >= 48 && c <= 57)
	{
		resp = 1;
	}
	return (resp);
}
