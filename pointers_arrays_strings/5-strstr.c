#include "main.h"
#include "2-strlen.c"

/**
 * _strstr - get first occurance of substring needle in haystack
 * @haystack: string to analyze
 * @needle: substring searched
 *
 * Return: pointer to beginning of first occurance
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int length = _strlen(needle);
	int compare = 0;
	char *ptr;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= length ; j++)
		{
			if (needle[j] == '\0')
				compare = 1;
			else if (haystack[i + j] != needle[j])
				break;
		}

		if (compare == 1)
			break;
	}

	if (compare == 1)
		ptr = &haystack[i];
	else
		ptr = '\0';

	return (ptr);
}
