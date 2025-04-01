#include "numbers.h"

/**
 * print_prime_numbers - prints all prime numbers from 0 to a limit n
 * @n: limit
 *
 * Return: 0
 */
void print_prime_numbers(unsigned long long int n)
{
	unsigned long long int i;

	for (i = 0 ; i < n ; i++)
	{
		if (is_prime_number(i))
			printf("%llu\n", i);
	}
}
