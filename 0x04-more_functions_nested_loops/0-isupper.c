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

	resp = 0;
	if (c >= 41 && c <= 90)
	{
		resp = 1;
	}
	return (resp);
}
