#include <stdio.h>

/**
 * main - Adds all multiples of 3 and 5 below 1024 and prints the result
 */
void main(void)
{
	int i;
	int s = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			s = s + i;
	}

	printf("%d\n", s);
}
