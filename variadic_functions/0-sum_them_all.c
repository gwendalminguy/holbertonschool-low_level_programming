#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - computes the sum of all arguments
 * @n: number of arguments
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
		total += va_arg(args, int);

	va_end(args);

	return (total);
}
