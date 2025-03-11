#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words (don't try this at home)
 * @str: string to split
 *
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **array;
	int i, j, index = 0, length = 0, words = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	for (i = 0 ; i < length ; i++)
	{
		if (str[i] != ' ' && str[i] != '\0' && (i == 0 || str[i - 1] == ' '))
			words++;
	}
	if (words == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			length = 0;
			while (str[i + length] != ' ' && str[i + length] != '\0')
				length++;
			array[index] = malloc(sizeof(char) * (length + 1));
			if (array[index] == NULL)
			{
				for (; index >= 0 ; index--)
					free(array[index]);
				free(array);
				return (NULL);
			}
			for (j = 0 ; j < length ; j++)
				array[index][j] = str[i + j];
			array[index][j] = '\0';
			index++;
		}
	}
	array[index] = NULL;
	return (array);
}
