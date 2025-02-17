#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			c = a * b;

			if (c < 10 && b > 0)
				_putchar(32);
			if (c > 10)
				_putchar('0' + (c / 10));
			if (c == 10)
				_putchar('0' + 1);
			_putchar('0' + (c % 10));
			if (b < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}

		_putchar('\n');
	}
}
