#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an inputted number of elements of an array
 * @a: the array of integers
 * @n: the number of elements to be printed
 * Return:void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;
		printf(", ");

	}

	printf("\n");
}
