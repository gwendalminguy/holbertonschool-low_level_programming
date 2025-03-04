#include "main.h"

/**
 * _strlen_recursion - computes the length of a string with recursion
 * @s: string to analyze
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		i += _strlen_recursion(&s[i]);
		return (i);
	}
	else
	{
		return (0);
	}
}

