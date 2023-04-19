#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -given as a parameter on each element of an array
 * @array : the first element
 * @size : the second element
 * @action : pointer function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
