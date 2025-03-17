#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: String
 *
 * Return: updated string
 */
char *leet(char *str)
{
	int characters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int numbers[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (str[i] == characters[j])
				str[i] = numbers[j];
		}
	}

	return (str);
}
