#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/*laila22haz*/
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator : separate between numbers
 * @n : number of argument
 * @...: numbers to be printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list countptr;

	va_start(countptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(countptr, int));
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(countptr);
}
