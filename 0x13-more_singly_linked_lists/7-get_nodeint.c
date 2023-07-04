#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: first node in the linked list
 * @index: node index, starts at 0
 * Return: nth nth node (Success) or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *node = head;

	a = 0;

	while (node != NULL && a < index)
	{
		node = node->next;
		a++;
	}

	return ((a == index) ? node : NULL);
}
