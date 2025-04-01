#include "lists.h"

/**
 * delete_dnodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: ...
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (-1);
	while (current)
	{
		if (i == index)
			break;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	temp = current;
	if (index == 0 && current->next == NULL)
		*head = NULL;
	else if (index == 0)
	{
		*head = temp->next;
		current = temp->next;
		current->prev = NULL;
	}
	else if (current->next == NULL)
	{
		current = current->prev;
		current->next = NULL;
	}
	else
	{
		current = temp->prev;
		current->next = temp->next;
		current = temp->next;
		current->prev = temp->prev;
	}
	free(temp);
	return (1);
}
