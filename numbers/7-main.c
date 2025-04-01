#include "numbers.h"

/**
 * main - prints all palindromic numbers up to a given limit
 * @argc: number of arguments
 * @argv: limit
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	unsigned long long int n;
	unsigned long long int i;

	if (argc != 2)
		printf("Usage: ./7-print_palindromic_numbers [limit]\n");
	else
	{
		n = atoll(argv[1]);
		print_palindromic_numbers(n);
	}

	return (0);
}
