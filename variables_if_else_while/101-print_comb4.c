#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints triple digits combinations
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int o;
	int p;

	for (n = 48 ; n <= 57 ; n++)
	{
		for (o = 48 ; o <= 57 ; o++)
		{
			for (p = 48 ; p <= 57 ; p++)
			{
				if (n != o && o != p && n != p && n < o && o < p && n < p)
				{
					putchar(n);
					putchar(o);
					putchar(p);
					if (n < 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
