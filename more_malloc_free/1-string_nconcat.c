#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates string s1 with n first bytes of string s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to newly created string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	str = malloc(sizeof(char) * (i + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0 ; j < n ; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
