#include <stdio.h>

/**
 * main - print a-z lower case only
 *
 * Description: using main function
 * Return: Default 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
