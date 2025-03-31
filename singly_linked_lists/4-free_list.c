#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *current = head;
	void *temp;

	while (current->next)
	{
		/* Saving address of next element */
		temp = current->next;

		/* Freeing current element */
		free(current);

		/* Switching current element to next one */
		current = temp;
	}

	/* Freeing last element */
	free(current);
}
