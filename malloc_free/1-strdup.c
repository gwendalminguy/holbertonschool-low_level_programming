#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string of any size
 * @str: string to duplicate
 *
 * Return: prointer to duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int size = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i <= size ; i++)
	{
		if (i != size)
			s[i] = str[i];
		else
			s[i] = '\0';
	}

	return (s);
}
