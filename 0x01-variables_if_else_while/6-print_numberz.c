#include <stdio.h>

/**
 * main - print all single number using putchar
 *
 * Description: using main function
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
	return (0);
}
