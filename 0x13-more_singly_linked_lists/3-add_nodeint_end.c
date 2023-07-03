#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds new node at the end of linked list
 * @head: Linked list pointer
 * @n: data to be added
 * Return: address to the new element(Success) or NULL(Fail)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *node = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (; node->next; node = node->next)
		continue;

	node->next = new;
	return (new);
}
