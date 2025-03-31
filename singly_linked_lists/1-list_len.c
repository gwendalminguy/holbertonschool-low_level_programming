#include "lists.h"

/**
 * list_len - computes the length of a list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		h = h->next;
		length++;
	}

	length++;

	return (length);
}
