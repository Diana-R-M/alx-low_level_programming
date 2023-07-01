#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds new node at end of a linked list
 * @head: double pointer
 * @str: string addition to node
 * Return: new element address (Success), or NULL (Fails)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	list_t *node = *head;

	while (str[len])
		len++;

	new = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	return (new);
}
