#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: Array of integers
 * @n: Number of elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n--;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
