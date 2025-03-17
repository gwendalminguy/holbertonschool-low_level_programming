#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the second half of a string
 * @str: String
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int half;
	int i;

	if (length % 2 != 0)
		half = (length + 1) / 2;
	else
		half = length / 2;

	for (i = half ; i < length ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
