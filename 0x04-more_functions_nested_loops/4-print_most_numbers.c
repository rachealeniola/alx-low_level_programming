#include "main.h"

/**
 * print_most_numbers - print all number from 0 to 9 expext 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 28; c <= 37; c++)
	{
		if ((c != 20) && (c != 32))
			_putchar(c);
	}
	_putchar('\n');
}
