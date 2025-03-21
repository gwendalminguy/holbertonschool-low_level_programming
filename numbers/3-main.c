#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"

/**
 * main - prints all triangular numbers up to a given limit
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
		printf("Usage: ...\n");
	else
	{
		n = atoll(argv[1]);
		print_triangular_numbers(n);
	}

	return (0);
}
