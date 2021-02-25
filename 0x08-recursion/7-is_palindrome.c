#include "holberton.h"

/**
 * comp - compares values of two functions.
 * @s: first value.
 * @g: second value.
 *
 * Return: 1 if same, 0 if not.
 */
int comp(char *s, char *g)
{
	if (*s == *g)
	{
		if (*(s + 1) != '\0')
		{
			return (comp(s + 1, g - 1));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}


/**
 * last - returns last position pointer.
 * @s: string to find last position.
 *
 * Return: pointer last postion.
 */
char *last(char *s)
{
	if (*s)
	{
		return (last(s + 1));
	}
	else
	{
		return (s - 1);
	}
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to see if palindrome.
 *
 * Return: 1 if it is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (comp(s, last(s)));
	}
}
