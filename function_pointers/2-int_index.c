#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches an array for an element with cmp
 * @array: array of elements
 * @size: size of array
 * @cmp: function to use for comparison
 *
 * Return: index of the first element matching
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
