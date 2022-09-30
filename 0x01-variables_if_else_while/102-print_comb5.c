#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations of two two-digit numbers
 *
 * Description: using main function
 * Return: Default 0
 */
int main(void)
{
	int x, y, z, i;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				for (i = 48; i <= 57; i++)
				{

				if (((z + i) > (x + y) &&  z >= x) || x < z)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(i);
					if (x + y + z + i == 227 && x == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
				

