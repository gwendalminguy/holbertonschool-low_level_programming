#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer
 * @s: Sting
 *
 * Return: the first integer found in the string
 */
int _atoi(char *s)
{
	int i;
	int length = _strlen(s);
	int sign = 1;
	int start = -1;
	int end;
	int number = 0;

	/* Getting the sign, the starting index and the ending index */
	for (i = 0 ; i < length ; i++)
	{
		if (s[i] == '-')
			sign = -sign;
		if ((s[i] >= 48 && s[i] <= 57) && (s[i - 1] < 48 || s[i - 1] > 57))
			start = i;
		if ((s[i] >= 48 && s[i] <= 57) && (s[i + 1] < 48 || s[i + 1] > 57))
		{
			end = i;
			break;
		}
	}

	/* Going through each digit and updating the number to return */
	if (start >= 0)
	{
		for (i = start ; i <= end ; i++)
			number = number * 10 + (s[i] - 48);

		if (sign < 0)
			number = -number;
	}

	return (number);
}
