#include <stdio.h>

/**
 * main - prints arguments
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
