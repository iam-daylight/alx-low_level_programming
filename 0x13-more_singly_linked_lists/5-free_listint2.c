#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *xxx;

if (head == NULL)
return;

while (*head)
{
	xxx = (*head)->next;
	free(*head);
	*head = xxx;
}

*head = NULL;
}

