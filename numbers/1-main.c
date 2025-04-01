#include "numbers.h"

/**
 * main - prints all prime numbers up to a given limit
 * @argc: number of arguments
 * @argv: limit
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	unsigned long long int n;

	if (argc != 2)
	{
		printf("Usage: ./1-print_prime_numbers [limit]\n");
		return (1);
	}
	else
	{
		n = atoll(argv[1]);
		print_prime_numbers(n);
		return (0);
	}
}
