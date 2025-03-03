#include "main.h"
#include "2-strlen.c"

/**
 * _strspn - gets the length of s matching accept
 * @s: string to analyze
 * @accept: set of characters
 *
 * Return: length of string matching
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int length = _strlen(accept);
	int compare = 1;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= length ; j++)
		{
			if (j == length)
			{
				compare = 0;
				break;
			}
			else if (s[i] == accept[j])
				break;
		}

		if (compare == 0)
			break;
	}

	return (i);
}

