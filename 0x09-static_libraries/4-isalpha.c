#include "holberton.h"

/**
 *_isalpha - Function that checks if its an alphabetic character
 *@c: The character you want to see if its in lowercase
 *
 *Return: 0 if it isn't alphabetic character and 1 if it is.
 */
int _isalpha(int c)
{
	int rsp;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		rsp = 1;
	}
	else
	{
		rsp = 0;
	}
	return (rsp);
}
