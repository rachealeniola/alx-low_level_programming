#include <stdio.h>

/**
 * main - factor
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int c, j;

	c = 612852475143;
	for (j = 3; j < (j / 2); j = j + 2)
	{
		while ((c % j == 0) && (c != j))
			c = c / j;
	}
	printf("%lu\n", c);
	return (0);
}
