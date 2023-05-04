#include "main.h"

/*laila22haz*/
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : argument
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res;

	res = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = (res <<  1) + (b[i] - 48);
	}
	return (res);
}
