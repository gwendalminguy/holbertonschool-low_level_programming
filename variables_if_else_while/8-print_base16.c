#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints single digits from 0 to 15 in hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 102 ; n++)
	{
		if (n <= 57 || n >= 97)
		putchar(n);
    }

	putchar('\n');

	return (0);
}
