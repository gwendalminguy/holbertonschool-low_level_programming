#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_prime_numbers(unsigned long long int max);

/**
 * main - prints all prime numbers up to a given limit and program runtime
 * @argc: number of arguments
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	clock_t start, end;
	double runtime;
	unsigned long long int max;

	if (argc == 2)
		max = atoll(argv[1]);
	else
	{
		printf("Usage: ./7-print_prime_numbers [maximum]\n");
		return (1);
	}

	start = clock();
	print_prime_numbers(max);
	end = clock();

	runtime = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Runtime: %.3f seconds\n", runtime);

	return (0);
}

/**
 * print_prime_numbers - prints all prime numbers up to a specified maximum
 * @max: maximum integer
 */
void print_prime_numbers(unsigned long long int max)
{
	unsigned long long int i = 1;
	unsigned long long int total = 0;

	while (i < max)
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
