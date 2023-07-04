#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - finds sum of all the data in the linked list
 * @head: pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node = head;

	sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
