#include <stdio.h>
#include <math.h>

/**
 * main - Prints the highest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long x = 612852475143;
	long div = sqrt(x);
	int is_prime_factor = 0;
	int i;

	while (!is_prime_factor)
	{
		if (x % div == 0)
		{
			for (i = 2 ; i < div ; i++)
			{
				if (div % i == 0)
				{
					printf("%ld\n", div);
					is_prime_factor = 1;
					break;
				}
			}
		}

		div--;
	}

	return (0);
}
