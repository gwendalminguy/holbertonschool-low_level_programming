#include "main.h"

/**
 * print_times_table - Prints n times table
 * @n: Number
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				c = a * b;
				/* Printing space(s) between two results */
				if (c < 10 && b > 0)
				{
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(32);
					_putchar(32);
				}
				else if (c >= 100)
					_putchar(32);
				/* Printing the result */
				if (c >= 100)
				{
					_putchar('0' + (c / 100));
					_putchar('0' + (c / 10) % 10);
				}
				else if (c >= 10 && c < 100)
					_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
				/* Printing the comma */
				if (b < n)
					_putchar(44);
			}

			_putchar('\n');
		}
	}
}
