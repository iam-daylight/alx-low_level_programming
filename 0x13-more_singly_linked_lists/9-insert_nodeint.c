#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is
 * @n: data to insert
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int v;
listint_t *again;
listint_t *xxx = *head;

again = malloc(sizeof(listint_t));
if (!again || !head)
return (NULL);

again->n = n;
again->next = NULL;

if (idx == 0)
{
again->next = *head;
*head = again;
return (again);
}

for (v = 0; xxx && v < idx; v++)
{
if (v == idx - 1)
{
again->next = xxx->next;
again->next = again;
return (again);
}
else
xxx = xxx->next;
}

return (NULL);
}

