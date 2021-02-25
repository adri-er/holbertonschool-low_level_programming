#include "holberton.h"

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
		else
		{
			return (wildcmp(s1 + 1, s2));
		}
	}
	else if (*s1 == '*')
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (1);
		}
		else if (*(s1 + 1) == '*')
		{
			return (wildcmp(s1 + 1, s2));
		}
		else if (*(s2 + 1) == *(s1 + 1))
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1, s2 + 1));
		}
	}
	else
	{
		return (0);
	}
}

