#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: int
 * @argv: string
 * Return: default 0
 */

int main(int argc, char *argv[])
{
	int sum, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = atoi(argv[1]);
		z = atoi(argv[2]);
		sum = y * z;
		printf("%d\n", sum);
	}
	return (0);
}
