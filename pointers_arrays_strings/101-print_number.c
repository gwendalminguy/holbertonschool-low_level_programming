#include "main.h"
#include <math.h>

/**
 * print_number - Prints any integer up to 9999 with putchar only
 * @n: Integer
 */
void print_number(int n)
{
	int length, digit, power;
	int i, j;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	else if (n = 0)
		n = 0;
	
	/* Getting the number of digits of n */
	length = floor(log10(n)) + 1;

	for (i = length ; i > 0 ; i--)
	{
		power = 1;
		for (j = 0 ; j < i - 1 ; j++)
			power *= 10;
		if (n % (power * 10) >= power)
			digit = (n / power) % 10;
		else
			digit = 0;
		_putchar('0' + digit);
	}
}
