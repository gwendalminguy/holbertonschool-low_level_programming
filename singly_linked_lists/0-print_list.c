#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;
	char *data;

	/* Printing each element of the list and going to the next one */
	while (h->next)
	{
		if (h->str == NULL)
			data = "(nil)";
		else
			data = h->str;

		printf("[%u] %s\n", h->len, data);
		length++;
	
		h = h->next;
	}

	/* Printing the last element of the list */
	if (h->str == NULL)
		data = "(nil)";
	else
		data = h->str;

	printf("[%u] %s\n", h->len, data);
	length++;

	return (length);

}
