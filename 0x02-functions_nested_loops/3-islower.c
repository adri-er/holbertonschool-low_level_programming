#include "holberton.h"

/**
 *_islower - Function that checks for lowercase character
 *@c: The number you want to see if its in lowercase
 *
 *Return: 0 if it isn't lower and 1 if it is.
 */
int _islower(int c)
{
	int rsp;

	if (c >= 97 && c <= 122)
	{
		rsp = 1;
	}
	else
	{
		rsp = 0;
	}
	return (rsp);
}
