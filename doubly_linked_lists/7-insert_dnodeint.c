#include "lists.h"

/**
 * insert_dnodeint_at_index - creates a new node at a given index
 * @h: head of the list
 * @idx: index of the new node
 * @n: data of the new node
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h;
	dlistint_t *new = NULL;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current)
	{
		if (i == idx)
			break;

		current = current->next;
		i++;
	}

	/* Inserting node at the end if index equals number of nodes */
	if (current == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	
	/* Returning NULL if index larger than number of nodes */
	else if (current == NULL)
		return (NULL);
	
	/* Allocating memory for new node */
	new = malloc(sizeof(dlistint_t));
	
	/* Returning NULL if malloc failed */
	if (new == NULL)
		return (NULL);
	
	/* Creating new node */
	new->n = n;
	new->prev = current->prev;
	new->next = current;
	
	/* Updating previous and next nodes */
	current->prev = new;
	current = new->prev;
	current->next = new;

	return (new);
}
