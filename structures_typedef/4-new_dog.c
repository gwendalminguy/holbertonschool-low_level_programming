#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, length;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	/* Creating a copy of the name */
	length = 0;

	while (name[length] != '\0')
		length++;

	new->name = malloc(sizeof(char) * (length + 1));

	/* Freeing memory if malloc fails */
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	/* Writing the copy of the name */
	for (i = 0 ; i < length ; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	/* Initializing the age */
	new->age = age;

	/* Creating a copy of the owner */
	length = 0;

	while (owner[length] != '\0')
		length++;

	new->owner = malloc(sizeof(char) * (length + 1));

	/* Freeing memory if malloc fails */
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	/* Writing the copy of the owner */
	for (i = 0 ; i < length ; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	return (new);
}
