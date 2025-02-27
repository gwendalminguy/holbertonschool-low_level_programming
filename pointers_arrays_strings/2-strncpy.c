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
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (i != n)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (dest);
}

