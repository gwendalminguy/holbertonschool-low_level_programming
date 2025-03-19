#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct type - ...
 *
 * @letter: given character
 * @f: matching function
 */
typedef struct function
{
	char id;
	void (*fptr)(va_list *args);
} function_t;

void print_char(va_list *args);
void print_int(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
