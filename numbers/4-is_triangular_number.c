#include "numbers.h"

/**
 * is_triangular_number - determines if n is a triangular number
 * @n: integer
 *
 * Return: 1 if n is a triangular number ; 0 otherwise
 */
int is_triangular_number(unsigned long long int n)
{
	int square_root = floor(sqrt(2 * n));

	if (square_root * (square_root + 1) == 2 * n)
		return (1);
	else
		return (0);
}
