#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees any given dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
