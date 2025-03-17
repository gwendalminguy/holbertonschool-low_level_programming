#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies a string from src to dest
 * @dest: Destination
 * @src: Source
 *
 * Return: variable dest with copied string
 */
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0 ; i < length + 1 ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
