#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts new node in a linked list
 * @head: pointer
 * @idx: index for addition of new node
 * @n: insertion data in new node
 * Return: new node address(Success) or NULL(Fail)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_Node;
	listint_t *node = *head;

	a = 0;

	new_Node = malloc(sizeof(listint_t));

	if (new_Node == NULL || !head)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;

	if (idx == 0)
	{
		new_Node->next = *head;
		*head = new_Node;

		return (new_Node);
	}

	for (a = 0; node && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new_Node->next = node->next;
			node->next = new_Node;

			return (new_Node);
		}

		else
		{
			node = node->next;
		}
	}

	return (NULL);
}
