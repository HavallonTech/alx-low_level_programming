#include "lists.h"

/**
 * get_nodeint_at_index - returns the hea node data after deleting
 * @head: first node in the linked list
 * @index: index of the hede node to return
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodecount;

	nodecount = 0;

	listint_t *temp = head;

	while (temp && nodecount < index)
	{
		temp = temp->next;
		nodecount nodecount + 1;
	}

	return (temp ? temp : NULL);
}
