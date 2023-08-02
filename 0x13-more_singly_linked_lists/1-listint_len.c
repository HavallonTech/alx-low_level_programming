#include "lists.h"

/**
 * listint_len - a function to retunr numberof  elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of the nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numnode = 0;

	while (h)
	{
		numnode = numnode + 1;
		h = h->next;
	}

	return (numnode);
}
