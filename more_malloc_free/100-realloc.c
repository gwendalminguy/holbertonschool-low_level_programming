#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: old size allocated in bytes
 * @new_size: new size to allocate in bytes
 *
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	int i, minimum;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size < new_size)
		minimum = old_size;
	else
		minimum = new_size;

	new_ptr = malloc(sizeof(char) * new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0 ; i < minimum ; i++)
		new_ptr[i] = 0;

	free(ptr);

	return (new_ptr);
}
