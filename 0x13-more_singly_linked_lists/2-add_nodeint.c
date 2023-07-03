#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_nodeint - adds new node at the beginning of linked list
 * @head: Linked list pointer
 * @n: data to be added
 * Return: address to the new element(Success) or NULL(Fail)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	new_Node = malloc(sizeof(listint_t));

	if (new_Node == NULL)
	{
		return (NULL);
	}

	new_Node->n = n;

	new_Node->next = *head;
	*head = new_Node;

	return (new_Node);
}
