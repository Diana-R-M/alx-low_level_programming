#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - returns number of elements in linked list
 * @h: linked list pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;

	while (h)
	{
		h = h->next;

		size++;

	}

	return (size);
}

