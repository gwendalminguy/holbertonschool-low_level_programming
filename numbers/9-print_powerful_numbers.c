#include "numbers.h"

/**
 * print_powerful_numbers - prints all powerful numbers from 0 to a limit n
 *
 * Return: 0
 */
void print_powerful_numbers(unsigned long long int n)
{
	unsigned long long int i;

	for (i = 0 ; i < n ; i++)
	{
		if (is_powerful_number(i))
			printf("%llu\n", i);
	}
}
