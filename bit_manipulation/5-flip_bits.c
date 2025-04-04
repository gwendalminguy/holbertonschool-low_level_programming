#include "main.h"

/**
 * flip_bits - ...
 * @n:
 * @m:
 *
 * Return:
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = 0;
	int i, result = 0;

	/* Setting all bits to flip to 1 in flips */
	flips = n ^ m;

	/* Counting bits set to 1 in flips */
	for (i = 0 ; i < 64 ; i++)
	{
		if (flips & 1)
			result += 1;
		
		flips = flips >> 1;

	}

	return (result);
}
