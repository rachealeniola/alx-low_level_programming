#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: the string to be encoded
 *
 * Return: a pointer to be encoded
 */

char *rot13(char *c)
{
	int x, y;
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",
	alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (x = 0; c[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (alphabet[y] == c[x])
			{
				c[x] = rot_13[y];
				break;
			}
		}
	}
	return (c);
}
