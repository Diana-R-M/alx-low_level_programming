#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_listint - frees linked list
 * @head: pointer of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;

		free(head);
		head = node;

	}
}
