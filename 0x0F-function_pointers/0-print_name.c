#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name : the first argument
 * @f: the function pointer
 *
 * Return : nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
