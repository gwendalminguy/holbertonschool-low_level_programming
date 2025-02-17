#include "main.h"

/**
 * _isalpha - Checks if a character is a letter
 * @c: Character
 *
 * Return: 0 if false ; 1 if true
 */
int _isalpha(int c)
{
	if ((97 <= c && 122 >= c) || (65 <= c && 90 >= c))
		return (1);
	else
		return (0);
}
