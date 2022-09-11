#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description: using main function
 * Return:0
 */
int main(void)
{
	char x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
