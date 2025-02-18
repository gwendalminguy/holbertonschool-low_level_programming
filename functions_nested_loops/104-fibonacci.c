#include <stdio.h>

/**
 * main - Prints the first 98 numbers of the Fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long unsigned a = 0;
	long unsigned b = 1;
	long unsigned c;

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
