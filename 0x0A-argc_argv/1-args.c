#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: int
 * @argv: string
 * Return: default 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
