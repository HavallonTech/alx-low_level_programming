#include "lists.h"
/**
 * print_listint - a function to prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnode = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numnode = numnode + 1;
		h = h->next;
	}
	return (numnode);
}
