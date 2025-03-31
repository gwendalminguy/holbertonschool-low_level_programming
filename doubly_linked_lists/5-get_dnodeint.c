#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: head of the list
 * @index: index of the node
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (current)
	{
		if (i == index)
			break;
		current = current->next;
		i++;
	}

	return (current);
}
