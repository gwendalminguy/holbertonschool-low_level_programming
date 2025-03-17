#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: difference between the first different characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

	if (s1[i] != s2[i])
		result = s1[i] - s2[i];
	else
		result = 0;

	return (result);
}
