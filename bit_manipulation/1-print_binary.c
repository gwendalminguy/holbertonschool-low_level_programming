#include "main.h"

/**
 * print_binary - prints any given integer to binary notation
 * @n: integer in decimal notation
 */
void print_binary(unsigned long int n)
{
	int size = 8 * sizeof(int);
	int i = 0, result = 0;
	int start = 0;

	for (i = size - 1 ; i >= 0 ; i--)
	{
		result = n >> i;

		if (result & 1)
		{
			_putchar('1');
			start = 1;
		}
		else if (start || i == 0)
			_putchar('0');
	}
}
