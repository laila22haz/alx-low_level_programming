#include <stdio.h>
#include <stdlib.h>

/*laila22haz*/
/**
 * main - program that prints its name
 * @argc : the first argument
 * @argv : the second argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s \n", argv[i]);
	}
	return (0);
}
