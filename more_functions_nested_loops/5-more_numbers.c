#include "main.h"

/**
 * more_numbers - Prints ten times numbers from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 9)
				_putchar('0' + 1);
			_putchar('0' + (j % 10));
		}

		_putchar('\n');
	}
}
