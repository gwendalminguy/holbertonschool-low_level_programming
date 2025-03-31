#include "lists.h"

/**
 * add_dnodeint_end - creates a new node at the end of the list
 * @head: head of the list
 * @n: data of the node
 *
 * Return: address of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *head;

	/* Adding a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	/* Checking if list is empty */
	if (*head == NULL)
	{
		/* Setting new node's previous pointer to NULL */
		new->prev = NULL;

		/* Setting head to new */
		*head = new;
	}
	else
	{
		/* Reaching the end of the list */
		while (current->next)
			current = current->next;

		/* Updating last node's previous pointer to new node */
		current->next = new;

		/* Setting new node's previous pointer to current node */
		new->prev = current;
	}

	return (new);
}
