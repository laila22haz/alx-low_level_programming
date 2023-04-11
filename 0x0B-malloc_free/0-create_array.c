#include <stdlib.h>

/**
 * create_array - program that creates an array of chars
 * @size : the first argument
 * @c : the second argument
 *
 * Return: arr
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
	return (NULL);
	}
	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
	return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
