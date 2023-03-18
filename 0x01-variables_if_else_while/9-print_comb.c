#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers from 0-9
 *              separated by commas and
 *              finally by a new line using only
 *              putchar() function and ASCII values.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
