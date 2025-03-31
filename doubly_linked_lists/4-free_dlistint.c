#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	void *temp;

	if (head == NULL)
	{
		printf("Freed !\n");
		exit(0);
	}

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
