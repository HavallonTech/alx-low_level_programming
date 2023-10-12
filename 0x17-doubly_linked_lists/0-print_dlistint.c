#include "lists.h"
/***
 * print_dlistint - A function to print elements of a doubly link list
 * @h : Head parameter received
 *
 * Return : Size_t signed integer data type
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t k;
	k = 0;
	/*struct dlistint_s *k = head; */
	struct dlistint_s *p = h;
	
	if (h == NULL)
		return k;

	/*start from the beginning*/
	while(p != NULL) {
		k++;
		printf(" %d",p->n);
		p = p->next;
	}
	return(k);
}
