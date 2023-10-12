#include "lists.h"

/**
 * add_dnodeint  - A function to to add node at the begining
 * @head : Head parameter received
 * @n : int n is the data to add
 *
 * Return: Size_t signed integer data type
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *lk = malloc(sizeof(dlistint_t));

	if (lk == NULL)
	{
		return (NULL);
	}

	lk->n = n;
	lk->next = (*head);
	lk->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = lk;
	}
	(*head) = lk;

	return (lk);
}
