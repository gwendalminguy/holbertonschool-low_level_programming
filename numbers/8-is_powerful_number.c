#include "numbers.h"

/**
 * is_powerful_number - determines wheter n is a powerful number or not
 * @n: integer
 *
 * Return: 1 if n is a powerful number ; 0 otherwise
 */
int is_powerful_number(unsigned long long int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

	if (is_prime_number(n))
		return (0);

	/* Checking if n is a powerful number */
	for (i = 2 ; i * i  <= n ; i++)
	{
		/* Checking if i is a divisor of n */
		if (n % i == 0)
		{
			j = n / i;

			if (is_prime_number(i))
			{
				if (n % (i * i) != 0)
					return (0);
			}
			if (is_prime_number(j))
			{
				if (n % (j * j) != 0)
					return (0);
			}
		}
	}

	return (1);
}
