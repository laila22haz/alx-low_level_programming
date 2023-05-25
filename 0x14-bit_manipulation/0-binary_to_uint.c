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
	int i = 0;
	unsigned int res = 0;

	if (!b)
		return (0);
	while (b[i])
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	res <<= 1;
	res += b[i] - '0';
	i++;
	}
	return (res);
}
