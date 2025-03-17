#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_perfect_number - determines if n is a perfect number
 * @n: integer
 *
 * Return: 1 if n is a perfect number ; 0 otherwise
 */
int is_perfect_number(unsigned long long int n)
{
	unsigned long long int sum;

	if (n < 2)
		return (0);

	sum = add_divisors(n);

	/* Checking if n is perfect */
	if (sum == n)
		return (1);
	else
	{
		/* printf("Sum: %llu\n", total); */
		return (0);
	}
}

/**
 * add_divisors - adds all divisors of n except itself
 * @n: integer
 *
 * Return: sum of divisors
 */
unsigned long long int add_divisors(unsigned long long int n)
{
	unsigned long long int i;
	unsigned long long int total = 0;

	/* Getting all divisors of n */
	for (i = 1 ; i * i <= n ; i++)
	{
		if (n % i == 0)
		{
			if (i * i == n || i == 1)
			{
				total += i;
			}
			else
			{
				total += i;
				total += n / i;
				/* printf("%llu & %llu\n", i, n / i); */
			}
		}
	}

	return (total);
}
