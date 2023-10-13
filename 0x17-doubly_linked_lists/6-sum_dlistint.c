#include "lists.h"

/**
 * sum_dlistint - A function to get the sum of all int node
 * @head : Head parameter received
 *
 * Return: sum of integers in the node
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);

}
