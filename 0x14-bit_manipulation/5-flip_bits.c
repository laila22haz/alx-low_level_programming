#include "main.h"

/*laila22haz*/
/**
*flip_bits - gets the number of bits to flip
*@n: second argument
*@m: first argument
*
*Return: unsigned integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
