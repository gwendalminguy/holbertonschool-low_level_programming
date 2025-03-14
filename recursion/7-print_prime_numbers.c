#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_prime_numbers(unsigned long long int max);
int is_prime_number(unsigned long long int n);
int increment_divisor(unsigned long long int n, int i);

/**
 * main - prints all prime numbers and program runtime
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
		max = atoi(argv[1]);
	else
	{
		printf("Usage: ./7-print_prime_numbers [number]\n");
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
 * print_prime_numbers - prints all prime numbers up to max
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



/**
 * is_prime_number - checks with base cases if n is a prime number
 * @n: integer to test
 *
 * Return: 1 if n is prime ; 0 otherwise
 */
int is_prime_number(unsigned long long int n)
{
        if (n == 2)
                return (1);
        if (n < 2 || n % 2 == 0)
                return (0);
        else
                return (increment_divisor(n, 3));

}



/**
 * increment_divisor - tests all pertinent divisors for n
 * @n: integer to test
 * @i: divisor
 *
 * Return: 1 if n is prime ; 0 otherwise
 */
int increment_divisor(unsigned long long int n, int i)
{
        if (n % i == 0)
                return (0);
        else if (i * i - 1 > n)
                return (1);
        else
                return (increment_divisor(n, i + 2));
}
