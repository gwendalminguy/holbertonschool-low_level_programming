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
		printf("Usage: ./4-is_palindromic_number [number]\n");
		return (1);
	}
	else
	{
		n = atoll(argv[1]);
		printf("%d\n", is_palindromic_number(n));
		return (0);
	}
}
