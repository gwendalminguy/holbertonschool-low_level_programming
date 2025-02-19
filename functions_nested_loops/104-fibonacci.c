#include <stdio.h>

/**
 * main - Prints the first 98 numbers of the Fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long double a = 0;
	long double b = 1;
	long double c;

	for (i = 0 ; i < 98 ; i++)
	{
		c = a + b;
		a = b;
		b = c;

		if (i != 97)
		{
			printf("%.0Lf", c);
			printf(", ");
		}
		else
			printf("%.0Lf", c + 2);
	}

	putchar('\n');

	return (0);
}
