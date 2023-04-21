#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*laila22haz*/
/**
 * print_strings - prints strings, followed by a new line
 * @separator : separate between numbers
 * @n : number of argument
 * @...: numbers to be printed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list countptr;
	char *str;

	va_start(countptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(countptr, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(countptr);
}
