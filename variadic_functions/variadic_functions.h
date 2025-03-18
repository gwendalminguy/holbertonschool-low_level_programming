#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct type - ...
 *
 * @letter: given char
 * @type: matching type
 */
typedef struct type
{
        char letter;
        va_list (*f)(va_list args);
} type_t;

va_list print_char(va_list args);
va_list print_int(va_list args);
va_list print_float(va_list args);
va_list print_string(va_list args);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
