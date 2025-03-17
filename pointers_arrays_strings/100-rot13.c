#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: String
 *
 * Return: updated string
 */
char *rot13(char *str)
{
	int i = 0;
	int shift;

	while (str[i] != '\0')
	{
		while ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			/* Negative shift by default */
			shift = -13;

			/* Switching to positive shift if letter in first half of alphabet */
			if ((str[i] > 64 && str[i] < 78) || (str[i] > 96 && str[i] < 110))
			{
				shift = 13;
			}

			str[i] += shift;

			break;
		}

		i++;
	}

	return (str);
}
