#include <stdio.h>

/**
 * main -  different combinations of two digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
					if (a + b + c < 24)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	return (0);
}
