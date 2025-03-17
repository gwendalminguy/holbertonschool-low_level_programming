#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - copies n first src characters to replace n first dest characters
 * @dest: String
 * @src: String
 * @n: Number
 *
 * Return: updated dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length_src = _strlen(src);
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	if (length_src < n)
	{
		for (j = length_src ; j < n ; j++)
			dest[j] = '\0';
	}

	return (dest);
}
