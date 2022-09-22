#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		if (src[x] == '\0')
		{
			for (y = x; y < n && dest[y] != '\0'; y++)
				dest[y] = '\0';
			break;
		}
		dest[x] = src[x];
	}
	return (dest);
}
