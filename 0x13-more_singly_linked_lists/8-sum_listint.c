#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a list
 * @head: first node in the linked list
 * Return: resulting datasum
 */

int sum_listint(listint_t *head)
{
	int datasum = 0;

	listint_t *temp = head;

	while (temp)
	{
		datasum += temp->n;
		temp = temp->next;
	}

	return (datasum);
}
