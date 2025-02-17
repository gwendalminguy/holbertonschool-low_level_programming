#include "main.h"

void print_alphabet(void);

void print_alphabet(void)
{
	int a = 97;

	for (a ; a < 123 ; a++)
		_putchar(a);
	
	_putchar('\n');

	return (0);
}

int main(void)
{
	print_alphabet;

	return (0);
}