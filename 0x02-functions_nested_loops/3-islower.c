#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 *_islower - Function that checks for lowercase character
 *@c: The number you want to see if its in lowercase
 *
 *Return: 0 if it isn't lower and 1 if it is.
 */
int _islower(int c)
{
	int rsp;

	if (islower(c) != 0)
	{
		rsp = 1;
	}
	else
	{
		rsp = islower(c);
	}
	return (rsp);
}
