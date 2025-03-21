#include <stdio.h>
#include "numbers.h"

/**
 * print_triangular_numbers - prints all triangular numbers from 0 to a limit n
 * @n: limit
 */
void print_triangular_numbers(unsigned long long int n)
{
	unsigned long long int i;

	for (i = 0 ; i < n ; i++)
	{
		if (is_triangular_number(i))
			printf("%llu\n", i);
	}
}
