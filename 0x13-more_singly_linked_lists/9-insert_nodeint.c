#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *new;
listint_t *xxx = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (a = 0; xxx && a < idx; a++)
{
if (a == idx - 1)
{
new->next = xxx->next;
xxx->next = new;
return (new);
}
else
xxx = xxx->next;
}

return (NULL);
}

