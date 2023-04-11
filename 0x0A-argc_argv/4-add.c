#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
	}

	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
