#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **array;
	int i, j;
	int index = 0;
	int length = 0;
	int total = 0;
	int words = 0;
	int characters = 0;

	if (str == NULL)
		return (NULL);

	while (str[total] != '\0')
		total++;

	for (i = 0 ; i < total ; i++)
	{
		/* Counting number of words */
		if (str[i] != ' ' && str[i] != '\0' && (i == 0 || str[i - 1] == ' '))
			words++;

		/* Returning NULL if no word found */
		if (words == 0)
			return (NULL);

		/* Counting number of characters */
		if (str[i] != ' ' && str[i] != '\0')
			characters++;
	}

	/* Allocating memory for the array */
	array = malloc(sizeof(char *) * (words + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		/* Detecting the begining of a word */
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			j = 0;

			/* Counting characters for the word */
			while (str[i + j] != ' ' && str[i + j] != '\0')
				j++;

			length = j;

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

			j = 0;

			/* Copying the word */
			while (j < length)
			{
				array[index][j] = str[i + j];
				j++;
			}

			array[index][j] = '\0';
			index++;
		}
	}

	array[index] = malloc(sizeof(char));

	array[index] = NULL;

	return (array);
}
