#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_listint2 - frees linked list
 * @head: pointer to be freed
 * head set to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	for (; *head; *head = node)
	{
		node = (*head)->next;

		free(*head);
	}

	*head = NULL;
}
