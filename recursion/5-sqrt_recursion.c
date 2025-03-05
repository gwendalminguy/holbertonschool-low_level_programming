#include "main.h"

/**
 * _sqrt_recursion - computes the square root of n
 * @n: positive integer
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (increment_sqrt(n, 0));
}

/**
 * increment_sqrt - tests all potential square roots of n
 * @n: integer to test
 * @i: potential square root
 *
 * Return: square root of n if it's a natural integer ; -1 otherwise
 */
int increment_sqrt(int n, int i)
{
	if (i * i == n && n >= 0)
		return (i);
	else if (i * i < n && n >= 0)
		return (increment_sqrt(n, i + 1));
	else
		return (-1);
}

