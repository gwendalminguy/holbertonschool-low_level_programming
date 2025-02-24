#include "main.h"

/**
 * _isdigit - Determines if the input is a digit or not
 * @c: Char
 *
 * Return: 0 if not digit / 1 if digit
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
