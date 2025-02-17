#include "main.h"

/**
 * islower - Checks if a character is lowercase
 * @c: Character
 *
 * Return: 0 if false ; 1 if true
 */
int islower(int c)
{
	if (_islower(c))
		return (1);
	else
		return (0);
}
