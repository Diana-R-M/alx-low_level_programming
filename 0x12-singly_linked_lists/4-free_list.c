#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: Pointer of linked list
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
