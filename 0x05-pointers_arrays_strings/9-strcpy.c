B#include "holberton.h"

/**
 * _strcpy -  copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer of the copys destination
 * @src: pointer of the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *index, *index2;
	int length, c;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}

	index = src;
	index2 = dest;
	for (c = 0; c <= length; c++)
	{
		*index2 = *index;
		index2++;
		index++;
	}

	return (dest);
}
