#include "main.h"
#include "2-strlen.c"

/**
 * _strchr - locates character c in string s
 * @s: string to search in
 * @c: character to locate
 *
 * Return: pointer to first occurance
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int length = _strlen(s);
	char *ptr;

	if (c != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;

		if (s[i] != '\0')
			ptr = &s[i];
		else
			ptr = '\0';

	}
	else
		ptr = &s[length];

	return (ptr);
}

