#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees any given dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
