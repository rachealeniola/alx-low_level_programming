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
	int x;

	x = 0;

	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + 1);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
