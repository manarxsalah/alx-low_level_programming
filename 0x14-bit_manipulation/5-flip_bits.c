#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 *		to flip to get from one number to another
 * @n: first no.
 * @m: second no.
 * Return: no. of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorV = n ^ m;
	unsigned int count = 0;

	while (xorV)
	{
		if (xorV & 1ul)
			++count;
		xorV = xorV >> 1;
	}
	return (count);
}
