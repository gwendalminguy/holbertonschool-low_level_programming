#include "main.h"

/**
 * set_bit - sets the bit of a number to 1 at a given index
 * @n: pointer to the number
 * @index: index to enable the bit at
 *
 * Return: 1 if successful ; -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	/* Checking if index is out of range */
	if (index >= 64)
		return (-1);

	/* Setting the bit to the right position */
	bit = bit << index;

	/* Enabling the bit in n */
	*n = *n | bit;

	return (1);
}
