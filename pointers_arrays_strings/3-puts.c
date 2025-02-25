#include "main.h"

/**
 * _puts - prints a string
 * @str: String
 */
void _puts(char *str)
{
	int i = 0;
	char c = str[i];

	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = str[i];
	}

	_putchar('\n');
}
