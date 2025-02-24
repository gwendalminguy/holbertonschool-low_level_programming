#include "main.h"

/**
 * print_triangle - Prints a triangle with '#' of any given size
 * @size: Integer for trangle size
 */
void print_triangle(int size)
{
	int i;
	int space;
	int symbol;

	if (size > 0)
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (space = 0 ; space <= (size - i) ; space++)
			{
				_putchar(' ');
			}

			for (symbol = 1 ; symbol <= i ; symbol++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
