#include "main.h"

/*laila22haz*/
/**
 * get_bit - returns the value of a bit at a given index
 *@n: the first argument
 *@index: the second argument
 *
 *Return: integer value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
