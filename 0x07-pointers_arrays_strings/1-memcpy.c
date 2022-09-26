#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: char
 * @dest: char
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		dest[y] = src[y];

return (dest);
}
