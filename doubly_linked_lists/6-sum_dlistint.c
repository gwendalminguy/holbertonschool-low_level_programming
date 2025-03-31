#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the numbers of a list of integers
 * @head: head of the list
 *
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (result);

	while (current)
	{
		result += current->n;
		current = current->next;
	}

	return (result);
}
