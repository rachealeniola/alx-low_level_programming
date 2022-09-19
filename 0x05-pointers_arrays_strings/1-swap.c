#include "main.h"

/**
 * swap_int - swap the values of two integers
 *@a: integer to be swapped
 *@b: integer to be swapped
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
