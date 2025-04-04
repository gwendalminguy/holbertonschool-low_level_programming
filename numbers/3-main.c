#include "numbers.h"

/**
 * main - prints all perfect numbers up to a given limit
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
		dprintf(STDERR_FILENO, "Usage: ./3-print_perfect_numbers [limit]\n");
		exit(1);
	}
	
	n = atoll(argv[1]);
	print_perfect_numbers(n);
	
	return (0);
}
