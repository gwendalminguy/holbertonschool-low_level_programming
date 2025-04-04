#include "numbers.h"

/**
 * main - determines if n is a palindromic number
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
		dprintf(STDERR_FILENO, "Usage: ./6-is_palindromic_number [number]\n");
		exit(1);
	}

	n = atoll(argv[1]);
	printf("%d\n", is_palindromic_number(n));
	
	return (0);
}
