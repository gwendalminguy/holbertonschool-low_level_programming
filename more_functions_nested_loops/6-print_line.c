#include "main.h"

/**
 * print_line - Prints '_' n times
 * @n: Integer
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar('_');

	_putchar('\n');
}
