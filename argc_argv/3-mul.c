#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers given as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if arguments are not exactly two integers ; 0 otherwise
 */
int main(int argc, char **argv)
{
	int num_a, num_b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		num_a = atoi(argv[1]);
		num_b = atoi(argv[2]);

		printf("%d\n", num_a * num_b);

		return (0);
	}
}
