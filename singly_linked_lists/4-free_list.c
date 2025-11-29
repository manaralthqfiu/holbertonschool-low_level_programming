#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a singly linked list of type list_t
 * @head: pointer to the head of the list
 *
 * Frees each node's string (allocated with strdup) and the node itself.
 * Caller should set head = NULL after calling to avoid a dangling pointer.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = next;
	}
}
