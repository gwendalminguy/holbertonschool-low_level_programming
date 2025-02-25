#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First value
 * @b: Second value
 */
void swap_int(int *a, int *b)
{
	int inter;

	inter = *a;
	*a = *b;
	*b = inter;
}
