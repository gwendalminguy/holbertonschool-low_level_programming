#ifndef NUMBERS_H
#define NUMBERS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime_number(unsigned long long int n);
int increment_divisor(unsigned long long int n, int i);
void print_prime_numbers(unsigned long long int n);
int is_perfect_number(unsigned long long int n);
unsigned long long int add_divisors(unsigned long long int n);
void print_perfect_numbers(unsigned long long int n);
int is_triangular_number(unsigned long long n);
void print_triangular_numbers(unsigned long long int n);
int is_palindromic_number(unsigned long long int n);
void print_palindromic_numbers(unsigned long long int n);

#endif
