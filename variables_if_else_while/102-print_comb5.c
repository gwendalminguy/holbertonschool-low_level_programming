#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints double two digits combinations
 *
 * Return: 0
 */
int main(void)
{
	int u;
	int v;
	int x;
	int y;

	for (u = 48 ; u <= 57 ; u++)
	{
		for (v = 48 ; v <= 57 ; v++)
		{
			for (x = 48 ; x <= 57 ; x++)
			{
				for (y = 48 ; y <= 57 ; y++)
				{
					if (10 * (u - 48) + (v - 48) < 10 * (x - 48) + (y - 48))
					{
						putchar(u);
						putchar(v);
						putchar(32);
						putchar(x);
						putchar(y);
						if (10 * (u - 48) + (v - 48) < 98)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
