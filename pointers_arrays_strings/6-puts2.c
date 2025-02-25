#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string
 * @str: String
 */
void puts2(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = 0 ; i < length ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

