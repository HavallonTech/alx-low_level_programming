#include "lists.h"

/**
 * free_dlistint  - A function to to add node at the begining
 * @head : Head parameter received
 * 
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *temp2;	
	
	if (head == NULL)
		return;
	/*dlistint_t *temp;*/
	if (head != NULL)
	{
		temp = head;
		if (head->prev != NULL)
		{
			temp2 = head->prev;
			free(temp2);
		}
		head = head->next;
		free(temp);
	}
	free(head);
}
