#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints double digits combinations
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int o;

	for (n = 48 ; n <= 57 ; n++)
	{
		for (o = 48 ; o <= 57 ; o++)
		{
			if (n < o)
			{
				putchar(n);
				putchar(o);
				if (n < 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
