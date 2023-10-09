#include "search_algos.h"
/**
 * binary_search - searche for a value with binary search
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0, midle, i;
	int right = size - 1;

	while (left <= right)
	{
		midle = left + (right - left) / 2;
		printf("Searching in subarray: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[midle] == value)
		{
			return (midle);
		}
		else if (array[midle] < value)
			left = midle + 1;
		else
			right = midle - 1;
	}
	return (-1);
}
