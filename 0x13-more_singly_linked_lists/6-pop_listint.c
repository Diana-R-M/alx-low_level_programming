#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - deletes head node of a linked list
 * @head: head node pointer
 * Return: deleted head node's data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int size;

	if (!head || !*head)
		return (0);

	size = (*head)->n;

	node = *head;
	*head = (*head)->next;

	free(node);

	return (size);
}
