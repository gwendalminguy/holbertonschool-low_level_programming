#include <stdio.h>
#include <stdlib.h>

int change(int value, int *cents);

/**
 * main - prints minimum number of coins to make change for any amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if argument is not a single integer ; 0 otherwise
 */
int main(int argc, char **argv)
{
	int quarter, dime, nickel, two, penny;
	int argument;
	int *cents = &argument;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	argument = atoi(argv[1]);

	if (*cents < 0)
	{
		printf("0\n");
		return (0);
	}

	quarter = change(25, cents);
	dime = change(10, cents);
	nickel = change(5, cents);
	two = change(2, cents);
	penny = change(1, cents);

	printf("%d\n", quarter + dime + nickel + two + penny);

	return (0);
}

/**
 * change - computes the maximum number of times value fits into cents
 * @value: value of coin
 * @cents: amount of money
 *
 * Return: number of coins
 */
int change(int value, int *cents)
{
	int n;

	if (*cents >= value && value != 1)
	{
		n = *cents / value;
		*cents = *cents % value;
		return (n);
	}
	else if (*cents >= value && value == 1)
	{
		n = 1;
		*cents = 0;
		return (n);
	}

	return (0);
}

