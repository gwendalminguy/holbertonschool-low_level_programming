#include <stdio.h>

/**
 * main - Prints the sum of all the even-valued terms of the Fibonacci sequence below 4.000.000
 *
 * Return: 0
 */
int main(void)
{
	long a = 0;
	long b = 1;
	long c = 0;
	long s = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0)
		{
			s = s + c;
		}
	}

	printf("%ld\n", s);

	return (0);
}
