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
	size_t index = 0;

	if (array == NULL)
		return (-1);
	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
