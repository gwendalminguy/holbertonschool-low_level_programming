#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints any given char
 * @args: argument
 */
va_list print_char(va_list args)
{       
	int argument = va_arg(args, int);

	printf("%c", argument);
	return (args);
}       

/**
 * print_int - prints any given integer
 * @args: argument
 */
va_list print_int(va_list args)
{
	int argument = va_arg(args, int);

	printf("%d", argument);
	return (args);
}

/**
 * print_float - prints any given float
 * @args: argument
 */
va_list print_float(va_list args)
{
	float argument = va_arg(args, double);

	printf("%f", argument);
	return (args);
}               

/**
 * print_string - prints any given string
 * @args: argument
 */
va_list print_string(va_list args)
{
	char *argument = va_arg(args, char *);

	printf("%s", argument);
	return (args);
}

/**
 * print_all - prints everything it receives as arguments
 * @format: list of types as string
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	va_list args;
	type_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	
	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (types[j].letter != '\0')
		{
			if (format[i] == types[j].letter)
			{
				args = types[j].f(args);
				break;
			}

			j++;
		}
			
		i++;
	}

	va_end(args);

	printf("\n");
}
