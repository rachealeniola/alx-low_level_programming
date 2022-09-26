#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @accept: set of bytes to be searched for
 * @s: string
 * Return: if a set is matched - a pointer to the matched byte
 * if no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}

		s++;
	}

	return ('\0');
}

