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
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;

	/* Adding a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
		new->next = NULL;
	else
	{
		/* Updating current head's previous pointer to new node */
		temp = *head;
		temp->prev = new;

		/* Setting new node's next pointer to current head */
		new->next = *head;
	}

	/* Updating head to be the new node */
	*head = new;

	return (new);
}
