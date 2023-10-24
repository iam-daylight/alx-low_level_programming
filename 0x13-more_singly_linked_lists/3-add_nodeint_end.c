#include "lists.h"

/**
 * add_nodeint_end -function to add a node
 * @head: pointer to the first element
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *again;
listint_t *xxx = *head;

again = malloc(sizeof(listint_t));
if (!again)
	return (NULL);
again->n = n;
again->next = NULL;

if (*head == NULL)
{
	*head = again;
	return (again);
}

while (xxx->next)
	xxx = xxx->next;
	xxx->next = again;
	return (again);
}

