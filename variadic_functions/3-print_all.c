#include "variadic_functions.h"

/**
 * print_char - prints any given char
 * @args: argument
 */
void print_char(va_list args)
{
	int character = va_arg(args, int);

	printf("%c", character);
}

/**
 * print_int - prints any given integer
 * @args: argument
 */
void print_int(va_list args)
{
	int number = va_arg(args, int);

	printf("%d", number);
}

/**
 * print_float - prints any given float
 * @args: argument
 */
void print_float(va_list args)
{
	float number = va_arg(args, double);

	printf("%f", number);
}

/**
 * print_string - prints any given string
 * @args: argument
 */
void print_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string != NULL)
		printf("%s", string);
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

	/* Going through each character of format */
	while (format[i])
	{
		j = 0;

		/* Going through each letter of types */
		while (types[j].letter)
		{
			/* Getting the matching function */
			if (format[i] == types[j].letter)
			{
				types[j].f(args);
				break;
			}

			j++;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}
