#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array : the first argument
 * @size : the second argument
 * @cmp : pointer function
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == 0 || size <= 0 || array == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
