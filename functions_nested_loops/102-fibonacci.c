#include <stdio.h>

/**
 * main - Prints the first 50 numbers of the Fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long a = 0;
	long b = 1;
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
