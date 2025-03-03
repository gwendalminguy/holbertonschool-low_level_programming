#include "main.h"

/**
 * _memset - fills n first bytes of memory pointed to by s with constant byte b
 * @s: memory area
 * @b: byte to fill s with
 * @n: number of bytes to change
 *
 * Return: updated s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}

