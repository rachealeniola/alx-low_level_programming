#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Description: using void function
 * Return: void
 */

void print_alphabet(void)
{

	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
	_putchar(10);
}
