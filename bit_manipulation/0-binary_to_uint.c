#include "main.h"

/**
 * binary_to_uint - converts a binary number to a decimal number
 * @b: number in binary as a string
 *
 * Return: result as unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int x = 0, p = 1;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i--;

	while (i + 1)
	{
		x += p * (b[i] - '0');
		p *= 2;
		i--;
	}

	return (x);
}
