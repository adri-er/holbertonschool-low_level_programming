#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character we want to check
 *
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int resp;

	if (c >= 65 && c <= 90)
	{
		resp = 1;
	}
	else
	{
		resp = 0;
	}
	return (resp);
}
