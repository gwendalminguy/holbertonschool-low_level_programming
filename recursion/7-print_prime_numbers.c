#include "main.h"
#include <stdio.h>

/**
 * print_prime_numbers - prints all prime numbers from 0 to a limit n
 * @n: limit
 */
void print_prime_numbers(unsigned long long int n)
{
	unsigned long long int i = 1;
	unsigned long long int total = 0;

	while (i < n)
	{
		if (is_prime_number(i))
		{
			printf("%llu\n", i);
			total++;
		}

		i++;
	}

	printf("Total: %llu numbers\n", total);
}
