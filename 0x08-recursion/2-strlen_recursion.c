#include "main.h"

/**
 * _strlen_recursion - Print function that returns the length of a string
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
