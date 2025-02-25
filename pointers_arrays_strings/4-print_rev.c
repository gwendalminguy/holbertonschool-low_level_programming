#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse
 * @s: String
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	char c = s[length];
	int i;

	for (i = length ; i >= -1 ; i--)
	{
		_putchar(c);
		c = s[i];
	}

	_putchar('\n');
}
