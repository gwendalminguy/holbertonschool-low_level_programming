#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list
 * @str: data of the node
 *
 * Return: address of the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	/* Counting length of str */
	while (str[i])
		i++;

	/* Allocation enough memory for the new node */
	new = malloc(i + 1 + sizeof(int) + sizeof(void *));

	/* Checking if malloc failed */
	if (new == NULL)
		return (NULL);

	/* Setting node values and adding it at the beginning of the list */
	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
