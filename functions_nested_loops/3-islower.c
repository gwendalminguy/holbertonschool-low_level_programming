#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: Character
 *
 * Return: 0 if false ; 1 if true
 */
int _islower(int c)
{
	if (97 <= c && 122 >= c)
		return (1);
	else
		return (0);
}
