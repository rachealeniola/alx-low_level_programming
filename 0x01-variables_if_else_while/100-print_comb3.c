#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
 *
 * Description: using main function
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{

			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			if (x == 8 && y == 9)
			{
				break
					;
			{
			putchar(';');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
