#include "numbers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_perfect_numbers - prints all perfect numbers from 0 to a limit n
 * @n: limit
 *
 * Return: 0
 */
void print_perfect_numbers(unsigned long long int n)
{
	unsigned long long int i;

	for (i = 0 ; i < n ; i++)
	{
		if (is_perfect_number(i))
			printf("%llu\n", i);
	}
}
