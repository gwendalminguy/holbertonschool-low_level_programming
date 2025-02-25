#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: String
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int i = 0;
	char c = 'A';

	while (c != '\0')
	{
		c = s[i];
		i++;
	}

	i--;

	return (i);
}
