#include "lists.h"

/**
 * add_nodeint -A function that adds a new node
 * @head: pointer to the first node
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *again;

again = malloc(sizeof(listint_t));
if (!again)
return (NULL);

again->n = n;
again->next = *head;
*head = again;

return (again);
}

