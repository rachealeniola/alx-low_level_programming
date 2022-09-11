#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Description: using main function
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
