#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints single digits from 0 to 10
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (n ; n < 10 ; n++)
		printf("%d", n);

	putchar('\n');

	return (0);
}
