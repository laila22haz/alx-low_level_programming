#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc : the first argument
 * @argv : the second argument
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s \n", argv[i]);
	}
	return (0);
}
