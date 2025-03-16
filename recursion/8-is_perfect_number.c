#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_perfect_number(unsigned long long int n);
int *find_divisors(unsigned long long int n);

/**
 * main - ...
 * @argc: number of arguments
 * @argv: number to analyze
 *
 * Return: 1 if ... ; 0 otherwise
 */
int main(int argc, char **argv)
{
	unsigned long long int n;

	if (argc != 2)
	{
		printf("Usage: ./8-is_perfect_number [number]\n");
		return (1);
	}
	else
	{
		n = atoll(argv[1]);
		printf("%d\n", is_perfect_number(n));
		return (0);
	}
}



/**
 * is_perfect_number - determines if n is a perfect number
 * @n: integer
 *
 * Return: 1 if n is a perfect number ; 0 otherwise
 */
int is_perfect_number(unsigned long long int n)
{
	int *divisors;
	unsigned long long int total = 0;
	unsigned long long int length = 0;
	unsigned long long int i;

	if (is_prime_number(n) || n < 2)
		return (0);

	divisors = find_divisors(n);

	if (divisors == NULL)
		return (-1);

	while (divisors[length])
		length++;

	/* Adding all divisors of n */
	for (i = 0 ; i < length ; i++)
		total += divisors[i];

	/* Checking if n is perfect */
	if (total == n)
		return (1);
	else
	{
		printf("%llu\n", total);
		return (0);
	}
}



/**
 * find_divisors - finds all divisors of n except itself
 * @n: integer
 *
 * Return: array of integers
 */
int *find_divisors(unsigned long long int n)
{
	unsigned long long int i, j = 0;
	int *array;

	array = malloc(sizeof(int));

	if (array == NULL)
		return (NULL);

	/* Getting all divisors of n */
	for (i = 1 ; i < n ; i++)
	{
		if (n % i == 0)
		{
			array = realloc(array, (j + 1) * sizeof(unsigned long long int));
			array[j] = i;
			j++;
		}
	}

	return (array);
}
