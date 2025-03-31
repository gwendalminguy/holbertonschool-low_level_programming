#include "lists.h"

/**
 * dlistint_len - computes the length of a list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
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
