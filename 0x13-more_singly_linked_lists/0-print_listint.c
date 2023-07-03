#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all linked list elements
 * @h: pointer to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;

		h = h->next;
	}

	return (size);
}
