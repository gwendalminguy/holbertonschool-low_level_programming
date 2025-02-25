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

	for (i = length - 1 ; i >= 0 ; i--)
	{
		c = s[i];
		_putchar(c);
	}

	_putchar('\n');
}
