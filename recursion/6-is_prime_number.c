#include "main.h"

/**
 * is_prime_number - checks with base cases if n is a prime number
 * @n: integer to test
 *
 * Return: 1 if n is prime ; 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);
	else
		return (increment(n, 3));

}

/**
 * increment - tests all pertinent divisors for n
 * @n: integer to test
 * @i: divisor
 *
 * Return: 1 if n is prime ; 0 otherwise
 */
int increment(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i * i - 1 > n)
		return (1);
	else
		return (increment(n, i + 2));
}

