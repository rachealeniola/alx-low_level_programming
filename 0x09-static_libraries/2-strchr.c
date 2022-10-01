#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: char
 *  Return: If c is found - a pointer to the first occurence
 *          If c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int y;

	for (y = 0; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (s + y);
	}

	return ('\0');
}
