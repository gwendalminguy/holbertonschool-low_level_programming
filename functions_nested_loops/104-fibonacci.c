#include <stdio.h>

/**
 * main - Prints the first 98 numbers of the Fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long c;

	for (i = 0 ; i < 98 ; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%lu", c);

		if (i != 97)
			printf(", ");
	}

	putchar('\n');

	return (0);
}
