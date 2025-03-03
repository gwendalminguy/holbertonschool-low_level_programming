#include "main.h"
#include "2-strlen.c"

/**
 * _strpbrk - gets first occurance in s of any accept character
 * @s: string to analyze
 * @accept: set of characters
 *
 * Return: pointer to first occurance
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int length = _strlen(accept);
	int compare = 0;
	char *ptr;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= length ; j++)
		{
			if (j == length)
				break;
			else if (s[i] == accept[j])
			{
				compare = 1;
				break;
			}
		}

		if (compare == 1)
			break;
	}

	ptr = &s[i];

	return (ptr);
}

