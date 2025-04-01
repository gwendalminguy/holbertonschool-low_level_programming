#include "numbers.h"

/**
 * print_palindromic_numbers - prints all palindromic numbers from 0 to a limit n
 *
 * Return: 0
 */
void print_palindromic_numbers(unsigned long long int n)
{
	unsigned long long int i;

	for (i = 0 ; i < n ; i++)
	{
		if (is_palindromic_number(i))
			printf("%llu\n", i);
	}
}
