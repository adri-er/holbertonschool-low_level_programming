#include "holberton.h"

/**
 * wildcond - Checks for the different conditions of a case.
 * @s1: string to compare.
 * @s2: string to compare.
 *
 * Return: 1 if identical, 0 if not.
 */
int wildcond(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*(s2 + 1) == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if (*(s1 + 1) == *(s2 + 1))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*(s2 + 1) == *s1 &&  *(s2 + 2) == '\0')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else
	{
		return (wildcmp(s1 + 1, s2));
	}
}


/**
 * wildcmp - compares two strings, returns 1 if identical, otherwise return 0.
 * @s1: string to compare.
 * @s2: string to compare.
 *
 * Return: 1 if identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		else
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}
	else if (*s2 == '*')
	{
		return (wildcond(s1, s2));
	}
	else if (*s1 == '*')
	{
		return (wildcond(s2, s1));
	}
	else
	{
		return (0);
	}
}
