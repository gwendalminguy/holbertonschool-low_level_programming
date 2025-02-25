#include "main.h"

/**
 * print_number - Prints any integer up to 9999 with putchar only
 * @n: Integer
 */
void print_number(int n)
{
	int length;
	int digit;
	int power;
	int i;
	int j;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (n >= 1000000000)
		length = 10;
	else if (n >= 100000000)
		length = 9;
	else if (n >= 10000000)
		length = 8;
	else if (n >= 1000000)
		length = 7;
	else if (n >= 100000)
		length = 6;
	else if (n >= 10000)
		length = 5;
	else if (n >= 1000)
		length = 4;
	else if (n >= 100)
		length = 3;
	else if (n >= 10)
		length = 2;
	else
		length = 1;

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
