#include "lists.h"

/**
 * add_dnodeint - creates a new node at the beginning of the list
 * @head: head of the list
 * @n: data of the node
 *
 * Return: address of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* Adding a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	/* Setting address of next node if existing */
	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	*head = new;

	return (new);
}
