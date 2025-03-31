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

	if (head == NULL)
		exit(0);

	while (current->next)
	{
		/* Saving address of next element */
		temp = current->next;

		/* Freeing current element */
		if (current->str)
			free(current->str);
		free(current);

		/* Switching current element to next one */
		current = temp;
	}

	/* Freeing last element */
	if (current->str)
		free(current->str);
	free(current);
}
