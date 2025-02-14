#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints single digits from 0 to 10 with function putchar
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
