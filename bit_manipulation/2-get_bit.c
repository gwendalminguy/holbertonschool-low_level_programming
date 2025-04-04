#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index for a given number
 * @n: number
 * @index: index to get the bit at
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result = 0;

	if (index >= 64)
		result = -1;
	else if (n >> index & 1)
		result = 1;

	return (result);
}
