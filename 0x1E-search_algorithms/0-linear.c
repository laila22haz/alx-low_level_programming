#include "search_algos.h"

/**
* linear_search - searche for a value in an array of integers
* @array:pointer to the first element of the array
* @size:size of the array
* @value:value that we search for
* Return: return the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
		{
			return (index);
		}
		printf("Value checked [%lu] = [%d]\n", index, array[index]);
	}
	return (-1);
}
