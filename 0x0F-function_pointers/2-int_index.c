#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in @array
 * @array: the array of type int
 * @size: the size of the array
 * @cmp: a pointer to the function used to compare values
 * Return:index of the integer searched for
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}

	return (-1);
}
