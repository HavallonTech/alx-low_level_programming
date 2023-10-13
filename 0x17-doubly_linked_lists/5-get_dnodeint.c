#include "lists.h"

/**
 * get_dnodeint_at_index - A function to to get node at index
 * @head : Head parameter received
 * @index : int indexn is the data to add
 *
 * Return: the added node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t check = 0;
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);
	if (check == index)
		return (head);

	while (temp->next != NULL)
	{
		temp = temp->next;
		check++;
		if (check == index)
			return (temp);
	}
	return (NULL);

}
