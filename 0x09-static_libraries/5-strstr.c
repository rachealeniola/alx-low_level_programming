#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to work on
 * @needle: substring to match
 * Return: pointer to the first match or NUL
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, match;

	if (*needle == '\0')
		return (haystack);
	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == *needle)
		{
			for (y = 1; needle[x] != '\0'; y++)
			{
				if (needle[y] != haystack[x + y])
				{
					match = 0;
					break;
				}
				match = 1;
			}
			if (match)
				return (haystack + x);
		}
	}
	return (NULL);
}
