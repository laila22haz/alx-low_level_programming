#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n : the counter
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list countptr;

	va_start(countptr, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(countptr, int);

	va_end(countptr);
	return (sum);
}
