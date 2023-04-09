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
	int x;

	for (x = 0; x < argc; x++)
	printf("%s \n", argv[x]);
	return (0);
}
