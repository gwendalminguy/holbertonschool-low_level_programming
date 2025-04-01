#include "numbers.h"

/**
 * main - determines if n is a triangular number
 * @argc: number of arguments
 * @argv: number to analyze
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	unsigned long long int n;

	if (argc != 2)
		printf("Usage: ./4-is_triangular_number [number]\n");
	else
	{
		n = atoll(argv[1]);
		printf("%d\n", is_triangular_number(n));
	}
}
