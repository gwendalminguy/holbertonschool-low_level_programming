#include "lists.h"

/**
 * main - prints palindromic numbers from the product of two integers with three digits
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int max = 1000;
	int result = 0;

	for (a = 0 ; a < max ; a++)
	{
		for (b = 0 ; b < max ; b++)
		{
			/* Updating result only if larger than the previous one */
			if (is_palindromic_number(a * b) && a * b > result)
			{
				result = a * b;
				printf("%03i x %03i = %i\n", a, b, result);
			}
		}
	}

	printf("Largest: %i\n", result);

	return (0);
}

/**
 * is_palindromic_number - determines wheter n is a palindromic number or not
 * @n: integer
 *
 * Return: 1 if n is a palindromic number ; 0 otherwise
 */
int is_palindromic_number(int n)
{
	int len = 1;
	int parity = 0;
	int power = 1;
	int i = 0;
	int a = 0, b = 0;
	int number = n;

	/* Getting number of digits of n */
	while (number > 9)
	{
		number = number / 10;
		len++;
	}

	/* Checking for parity of the number of digits */
	if (len % 2 == 1)
		parity = 1;

	/* Checking if n is a palindromic number */
	while (len > parity)
	{
		power = 1;

		for (i = 0 ; i < len - 1 ; i++)
			power *= 10;

		/* Getting digit at the right */
		a = n % 10;

		/* Getting digit at the left */
		b = n / power;

		if (a != b)
			return (0);

		/* Updating n by removing right and left digits */
		n = (n % power) / 10;
		len -= 2;
	}

	return (1);
}
