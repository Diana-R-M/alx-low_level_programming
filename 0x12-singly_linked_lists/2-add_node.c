#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds new node at start of a linked list
 * @head: double pointer
 * @str: string addition to node
 * Return: new element address (Success), or NULL (Fails)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->next = *head;
	new->len = len;
	*head = new;

	return (*head);
}
