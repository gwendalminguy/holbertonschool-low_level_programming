#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the list
 * @str: data of the node
 *
 * Return: address of the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *current = *head;
	unsigned int i = 0;

	/* Counting length of str */
	while (str[i])
		i++;

	/* Allocating enough memory for the new node */
	new = malloc(i + 1 + sizeof(int) + sizeof(void *));

	/* Checking if malloc failed */
	if (new == NULL)
		return (NULL);

	/* Setting node values */
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	/* Setting head to new if list is empty */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Reaching the end of the list */
	while (current->next)
		current = current->next;

	/* Adding node at the end of the list */
	current->next = new;
	return (new);
}
