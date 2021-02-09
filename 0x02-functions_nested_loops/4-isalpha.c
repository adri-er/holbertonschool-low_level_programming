#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 *_isalpha - Function that checks if its an alphabetic character
 *@c: The character you want to see if its in lowercase
 *
 *Return: 0 if it isn't alphabetic character and 1 if it is.
 */
int _isalpha(int c)
{
	int rsp;

	if (isalpha(c) != 0)
	{
		rsp = 1;
	}
	else
	{
		rsp = isalpha(c);
	}
	return (rsp);
}
