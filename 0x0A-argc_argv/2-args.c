#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: int
 * @argv: string
 * Return: default 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
