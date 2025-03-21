#include "numbers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - determines if n is a perfect number
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
