#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments as one string
 * @ac: number of arguments
 * @av: arguments as array of strings
 *
 * Return: pointer to newly created string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total = 0;
	int i, j, k = 0;

	if (ac == 1)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			total++;
		}

		total++;
	}

	str = malloc(sizeof(char) * total + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
