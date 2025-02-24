#include "main.h"

/**
 * print_number - Prints any integer up to 9999 with putchar only
 * @n: Integer
 */
void print_number(int n)
{
	int milliers;
	int centaines;
	int dizaines;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n >= 1000)
	{
		if (n % 10000 >= 1000)
			milliers = (n / 1000) % 1000;
		else
			milliers = 0;
		_putchar('0' + milliers);
	}
	if (n >= 100)
	{
		if (n % 1000 >= 100)
			centaines = (n / 100) % 100;
		else
			centaines = 0;
		_putchar('0' + centaines);
	}
	if (n >= 10)
	{
		if (n % 100 >= 10)
			dizaines = (n / 10) % 10;
		else
			dizaines = 0;
		_putchar('0' + dizaines);
	}

	_putchar('0' + (n % 10));
}
