#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenates two strings by appending n first src bytes to dest
 * @dest: String
 * @src: String
 * @n: Number
 *
 * Return: updated dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_src = _strlen(src);
	int length_dest = _strlen(dest);
	int i;

	if (length_src < n)
		n = length_src;

	for (i = 0 ; i < n ; i++)
		dest[length_dest + i] = src[i];

	return (dest);
}
