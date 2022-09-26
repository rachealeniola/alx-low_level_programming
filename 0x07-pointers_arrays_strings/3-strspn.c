 #include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @accept: The prefix to be measured
 * @s: string to serch
 * Return: the number of bytes in s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				bytes++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);

}
