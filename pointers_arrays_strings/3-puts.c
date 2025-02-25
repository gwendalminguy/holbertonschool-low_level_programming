#include "main.h"

/**
 * _puts - prints a string
 * @str: String
 */
void _puts(char *str)
{
	int i = 0;
	char c = 'A';

	while (c != '\0')
	{
		c = str[i];
		_putchar(c);
		i++;
	}

	_putchar('\n');
}
