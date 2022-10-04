#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str:string
 * Return:char
 */

char *_strdup(char *str)
{
	char *c;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;
	c = malloc(sizeof(char) * (l + 1));

	if (c == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		c[i] = str[i];

	c[l] = '\0';

	return (c);
}
