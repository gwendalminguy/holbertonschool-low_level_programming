#include "lists.h"

/**
 * print_dlistint - prints each element of a list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);

	/* Dealing with each element of the list */
	while (h->next)
	{
		printf("%i\n", h->n);
		h = h->next;
		length++;
	}

	/* Dealing with the last element of the list */
	printf("%i\n", h->n);
	length++;

	return (length);
}
