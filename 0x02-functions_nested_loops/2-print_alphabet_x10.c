#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times on new lines
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char b = 'a';
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 26; n++)
		{
			_putchar(b + n);
		}
		_putchar(10);
	}
}
