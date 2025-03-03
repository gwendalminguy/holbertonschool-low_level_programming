#include "main.h"

/**
 * _strchr - ...
 * @s:
 * @c:
 *
 * Return: ...
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr;

	while (s[i] != c)
		i++;

	if (s[i] != '\0')
		ptr = &s[i];
	else
		ptr = '\0';

	return (ptr);
}

