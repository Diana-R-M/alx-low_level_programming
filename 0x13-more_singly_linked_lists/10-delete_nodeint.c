#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at a certain index
 * @head: pointer
 * @index: node index to delete
 * Return: 1(Success) or -1(Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *new_Node = NULL;
	unsigned int a = 0;

	if (*head == NULL || !head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);

		return (1);
	}

	while (a < index - 1)
	{
		if (node == NULL || !(node->next))
			return (-1);

		node = node->next;

		a++;
	}

	new_Node = node->next;
	node->next = new_Node->next;

	free(new_Node);

	return (1);
}
