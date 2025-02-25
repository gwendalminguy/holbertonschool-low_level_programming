#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: String
 */
void rev_string(char *s)
{
	int length = _strlen(s) - 1;
	char temp;
	int i;

	for (i = 0 ; i <= length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[length - i];
		s[length - i] = temp;
	}
}
