#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of all numbers given as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if any argument is not an integer ; 0 otherwise
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
