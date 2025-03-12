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
	char *dog_name = name;
	char *dog_owner = owner;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = dog_name;
	new->age = age;
	new->owner = dog_owner;

	return (new);
}
