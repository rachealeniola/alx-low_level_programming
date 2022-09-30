#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description: using main function
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for (; num < 9;  num++)
	{
		putchar(num);
		if (num < 8)
		{
			putchar(',');
		}
		if (num == 8)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
