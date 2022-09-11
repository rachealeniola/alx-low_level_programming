#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: using main function
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
