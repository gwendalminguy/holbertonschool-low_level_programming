#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 *
 * Return: 0 if false ; 1 if true
 */
int _islower(int c)
{
	if (97 <= c <= 122)
		return (1);
	else
		return (0);
}
