#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: pointer to the list to be freed
 */

void free_listint(listint_t *head)
{
listint_t *xxx;

while (head)
{
xxx = head->next;
free(head);
head = xxx;
}
}

