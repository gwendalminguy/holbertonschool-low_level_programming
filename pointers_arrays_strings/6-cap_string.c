#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: String
 *
 * Return: updated str
 */
char *cap_string(char *str)
{
	int i, j;
	int symbol[14] = {9, '\n',  32, 33, 34, 40, 41, 44, 46, 58, 59, 63, 123, 125};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0 ; j < 14 ; j++)
				{
					if (str[i - 1] == symbol[j])
					{
						str[i] -= 32;
					}
				}
			}
		}
	}

	return (str);
}
