#include "main.h"

/**
 * _pow_recursion - computes the value of x raised to the power of y
 * @x: integer
 * @y: positive integer
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y > 0)
	{
		result *= _pow_recursion(x, y - 1);
		return (result);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (-1);
}
