#include "main.h"

/**
 * print_most_numbers - Prints all single digits except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}

	_putchar('\n');
}
