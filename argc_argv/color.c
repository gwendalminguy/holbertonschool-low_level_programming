#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a colorful 'Hello World!'
 * @argc: number of arguments
 * @argv: color (31: red ; 32: green ; 34: blue)
 *
 * Return: 1 if no argument ; 0 otherwise
 */
int main(int argc, char **argv)
{
	int color = 0;

	if (argc == 2)
	{
		color = atoi(argv[1]);

		printf("\033[0;%dm", color);
		printf("Hello World!\n");
		printf("\033[0m");

		return (0);
	}
	else
	{
		printf("Error: no argument provided\n");

		return (1);
	}
}
