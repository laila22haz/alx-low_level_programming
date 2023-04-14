#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/*laila22haz*/
/**
 * array_range -  creates an array of integers
 * @min : the first argument
 * @max : the second argument
 *
 * Return: return pointer
 */
int *array_range(int min, int max)
{
	int size, i, *array;

	if (min > max)
	return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (!array)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	array[i] = min + i;
	}
	return (array);
}
