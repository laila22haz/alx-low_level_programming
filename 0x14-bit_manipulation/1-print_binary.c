#include "main.h"

/*laila22haz*/
/**
 * print_binary - prints the binary representation of a number
 * @n: argument
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;
	int i = 0;

	while (bit <= n)
	{
		bit <<= 1;
		i++;
	}
	if (i)
		bit >>= 1;
	while (bit)
	{
		if (n & bit)
			putchar('1');
		else
			putchar('0');
		bit >>= 1;
	}
}
