#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
/*struct dlistint_s *head = NULL;*/
/*struct dlistint_s *current = NULL; */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
/* void insertatbegin(int data); */
/*int printList(); */
#endif
