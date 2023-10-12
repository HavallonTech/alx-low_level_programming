#include "lists.h"

/**
 * dlistint_len - A function to print elements of a doubly link list
 * @h : Head parameter received
 *
 * Return: Size_t signed integer data type
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t k;

	k = 0;


	if (h == NULL)
		return (k);

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
