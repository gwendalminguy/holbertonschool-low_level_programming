#include "numbers.h"

/**
 * main - determines if n is a prime number
 * @argc: number of arguments
 * @argv: number to analyze
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	unsigned long long int n;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./0-is_prime_number [number]\n");
		exit(1);
	}

	n = atoll(argv[1]);
	printf("%d\n", is_prime_number(n));
	
	return (0);
}
