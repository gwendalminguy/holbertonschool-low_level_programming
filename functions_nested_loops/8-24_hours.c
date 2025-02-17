#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0 ; a < 3 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			for (c = 0 ; c < 6 ; c++)
			{
				for (d = 0 ; d < 10 ; d++)
				{
					if (10 * a + b < 24)
					{
						_putchar('0' + a);
						_putchar('0' + b);
						_putchar(58);
						_putchar('0' + c);
						_putchar('0' + d);
						_putchar('\n');
					}
				}
			}
		}
	}
}
