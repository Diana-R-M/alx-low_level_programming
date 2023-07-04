#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint - reverses a linked list
 * @head: head pointer
 * Return: reversed node pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_list, *new_list;

	old_list = NULL;
	new_list = *head;

	while (*head)
	{
		new_list = (*head)->next;
		(*head)->next = old_list;

		old_list = *head;
		*head = new_list;
	}

	*head = old_list;

	return (*head);
}
