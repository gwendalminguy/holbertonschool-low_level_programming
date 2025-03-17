#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of performs simple operations
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result;
	int a, b;

	if (argc != 4)
	{
		printf("Error 98\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error 99\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2] == "/" || argv[2] == "%") && b == 0)
	{
		printf("Error 100\n");
		exit(100);
	}

	result = get_op_func(argv[2])(a, b);

	printf("%d\n", result);

	return (0);
}
