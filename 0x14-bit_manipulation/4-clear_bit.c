#include "main.h"

/*laila2haz*/
/**
*clear_bit - sets a bit at a position to 0 at a given index
*@n: first argument
*@index: second argument
*
*Return: integer
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
