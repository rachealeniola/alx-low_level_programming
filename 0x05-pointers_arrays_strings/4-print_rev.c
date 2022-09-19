#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}
	y = x - 1;
	for (x = y; x >= 0; x--)
	{
		_putchar(s[x]);
	}
_putchar('\n');
return;
}
