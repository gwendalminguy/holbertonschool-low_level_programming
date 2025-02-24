#include "main.h"

/**
 * _isupper - Determines if a char is uppercase or not
 * @c: Char
 *
 * Return: 0 if not uppercase / 1 if uppercase
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
