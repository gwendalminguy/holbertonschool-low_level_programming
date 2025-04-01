#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes an existing node at a given index
 * @head: head of the list
 * @index: index of the  node to delete
 *
 * Return: 1 if successful ; -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (-1);
	
	/* Reaching node at given index */
	while (current)
	{
		if (i == index)
			break;
		current = current->next;
		i++;
	}
	
	/* Stoping if index is larger than number of nodes */
	if (current == NULL)
		return (-1);
	temp = current;
	
	/* Updating nodes when index is first node */
	if (index == 0 && current->next == NULL)
		*head = NULL;
	else if (index == 0)
	{
		*head = temp->next;
		current = temp->next;
		current->prev = NULL;
	}
	
	/* Updating nodes when index is last node */
	else if (current->next == NULL)
	{
		current = current->prev;
		current->next = NULL;
	}
	
	/* Updating nodes for other cases */
	else
	{
		current = temp->prev;
		current->next = temp->next;
		current = temp->next;
		current->prev = temp->prev;
	}
	
	/* Freeing node to delete */
	free(temp);
	
	return (1);
}
