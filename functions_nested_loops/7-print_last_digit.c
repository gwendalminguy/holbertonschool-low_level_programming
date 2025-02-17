#include "main.h"
#include "6-abs.c"


/**
 * print_last_digit - Gets the last digit of an integer
 * @n: Number
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + 48);

	return (0);
}
