#include "lists.h"

/**
 * free_dlistint  - A function to to add node at the begining
 * @head : Head parameter received
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	if (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	if (head != NULL)
	{
		free(head);
	}
}
