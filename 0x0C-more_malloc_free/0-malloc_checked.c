#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using
 * @b : the first argument
 *
 * Return : return pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

