#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n;
	int a;

	for (n = 0 ; n < 10 ; n++)
	{
		for (a = 97 ; a < 123 ; a++)
			_putchar(a);
	}

	_putchar('\n');
}
