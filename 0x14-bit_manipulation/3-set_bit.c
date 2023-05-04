#include "main.h"

/*laila22haz*/
/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: first argument
 *@index: second argument
 *
 *Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
