#include <stdio.h>

/**
 * main - Prints the first 50 numbers of the Fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long a = 1;
	long b = 2;
	long c;

	for (i = 0 ; i < 50 ; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%ld", c);

		if (i != 49)
			printf(", ");
	}

	putchar('\n');

	return (0);
}
