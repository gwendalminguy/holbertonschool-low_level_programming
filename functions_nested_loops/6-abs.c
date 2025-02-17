#include "main.h"

/**
 * _abs - Transforms an integer to its absolute value
 * @n: Number
 *
 * Return: Absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
