#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	for (ch ; ch <= 'z' ; ch++)
		putchar(ch);

	ch = '\n';

	putchar(ch);

	return (0);
}
