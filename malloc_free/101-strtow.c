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
	int i, j;
	int length = 0;
	int words = 0;
	int index = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	for (i = 0 ; i < length ; i++)
	{
		/* Counting number of words */
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	}

	if (words == 0)
		return (NULL);

	/* Allocating memory for the array */
	array = malloc(sizeof(char *) * (words + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		/* Detecting the begining of a word */
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			/* Counting characters for the word */
			length = 0;
			while (str[i + length] != ' ' && str[i + length] != '\0')
				length++;

			/* Allocating memory for the word */
			array[index] = malloc(sizeof(char) * (length + 1));

			/* Freeing memory if malloc fails */
			if (array[index] == NULL)
			{
				while (index >= 0)
				{
					index--;
					free(array[index]);
				}
				free(array);
				return (NULL);
			}

			/* Copying the word */
			for (j = 0 ; j < length ; j++)
				array[index][j] = str[i + j];

			array[index][j] = '\0';
			index++;
		}
	}
	array[index] = NULL;
	return (array);
}
