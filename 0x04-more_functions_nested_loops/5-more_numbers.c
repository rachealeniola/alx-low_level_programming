#include "main.h"

/**
 *  more_numbers - print 10 time from 0 to 14
 *
 *  Return: void
 */

void more_numbers(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' +  n % 10);
		}
		_putchar('\n');
	}

}
