#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator : first argument
 * @n : second argument
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list countptr;

	va_start(countptr, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(countptr, int));
		if (i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(countptr);
}
