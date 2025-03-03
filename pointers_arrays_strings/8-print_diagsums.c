#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of each diagonal of a matrix of integers
 * @a: array of integers
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_a = 0;
	int sum_b = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum_a += a[(size * i) + i];
		sum_b += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", sum_a, sum_b);
}

