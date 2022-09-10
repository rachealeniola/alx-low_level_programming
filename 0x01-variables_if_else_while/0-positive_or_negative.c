#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print positive ,negative and zero
 *
 * Description: using the main fuction
 * This program print whether the number is postive,negative or zero
 * Return: Default 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}

	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
