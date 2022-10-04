#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: int
 * @height:int
 * Return: a double pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int s, i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (0);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == 0)
	{
		free(a);
		return (0);
	}
	for (s = 0; s < height; s++)
	{
		*(a + s) = (int *)malloc(sizeof(int) * width);
		if (*(a + s) == 0)
		{
			for (i = 0; i < s; i++)
				free(*(a + i));
			free(a);
			return (0);
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				*(*(a + i) + j) = 0;
		}
	}
	return (a);
}
