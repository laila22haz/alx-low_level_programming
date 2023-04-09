#include <stdio.h>
#include <stdlib.h>

/*laila22haz*/
/**
 * main - program that prints the number of arguments passed into it
 * @argc : the first argument
 * @argv : the second argument
 * Return: 0
 */
int main(int argc, char* argv[])
{
	(void) argv;

	printf("%d\n",argc-1);
	
	return (0);
}
