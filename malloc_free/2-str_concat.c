#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings of any size
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly created string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1 = 0;
	int size2 = 0;
	int i;

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	s = malloc(sizeof(char) * (size1 + size2) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size1 ; i++)
	{
		s[i] = s1[i];
	}

	for (i = 0 ; i <= size2 ; i++)
	{
		if (i != size2)
			s[size1 + i] = s2[i];
		else
			s[size1 + i] = '\0';
	}

	return (s);
}
