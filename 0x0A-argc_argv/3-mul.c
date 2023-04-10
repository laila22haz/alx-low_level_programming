#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;
	int num1, num2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
