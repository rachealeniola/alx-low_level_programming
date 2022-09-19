#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0, y = 0;
	char tmp;

	while (s[y++])
		x++;

	for (y = x - 1; y >= x / 2; y--)
	{
		tmp = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = tmp;
	}
}
