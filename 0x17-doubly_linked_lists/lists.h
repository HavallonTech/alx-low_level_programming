#ifndef lists_h
#define lists_h


#include <stdio.h>
#include <string.h>
/*#include <stdlib.h>*/
struct dlistint_s{
	int n;
	struct dlistint_s *next;
	struct dlistint_t *prev;

}dlistint_t;
struct dlistint_s *head = NULL;
struct dlistint_s *current = NULL;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
/* void insertatbegin(int data); */
int printList();
#endif
