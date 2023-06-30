#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns no. of elements in a linked list
 * @h: pointer
 * Return: number elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
