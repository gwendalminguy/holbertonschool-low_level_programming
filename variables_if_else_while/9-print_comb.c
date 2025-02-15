#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints single digits separated by commas
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(44);
		putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
