#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit number from a random number
 *
 * Description: using main function
 * Return: Default 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;

	 srand(time(0));
	 n = rand() - RAND_MAX / 2;
	 lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("last digit of %d is %d and is less than 6 not 0\n", n, lastDigit);
	}
	return (0);
}
