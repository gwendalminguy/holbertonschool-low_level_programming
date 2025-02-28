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

	while (str[i] != '\0')
	{
		while ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if ((str[i] > 64 && str[i] < 78) || (str[i] > 96 && str[i] < 110))
			{
				str[i] += 13;
				break;
			}
			else
			{
				str[i] -= 13;
				break;
			}
		}

		i++;
	}

	return (str);
}

