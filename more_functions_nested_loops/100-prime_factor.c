#include <stdio.h>
#include <math.h>

/**
 * main - Prints the highest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	int is_prime_factor = 0;
	long x = 612852475143;
	long div_a;
	long div_b;
	long i;

	while (!is_prime_factor)
	{
		for (div_a = 2 ; div_a < sqrt(x) ; div_a++)
		{
			if (x % div_a == 0)
			{
				div_b = x / div_a;

				for (i = 2 ; i <= sqrt(div_b) + 1 ; i++)
				{
					if (div_b % i == 0 && i != sqrt(div_b))
						break;
					else if (i >= sqrt(div_b))
					{
						printf("%ld\n", div_b);
						is_prime_factor = 1;
						break;
					}
				}
			}
		}
	}

	return (0);
}
