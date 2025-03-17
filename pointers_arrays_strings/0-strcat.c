#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenates two strings by appending src to dest
 * @dest: String
 * @src: String
 *
 * Return: updated dest
 */
char *_strcat(char *dest, char *src)
{
	int length_src = _strlen(src);
	int length_dest = _strlen(dest);
	int i;

	for (i = 0 ; i < length_src ; i++)
		dest[length_dest + i] = src[i];

	return (dest);
}
