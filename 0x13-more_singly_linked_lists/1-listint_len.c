#include "lists.h"

/**
 * listint_len -A function to return the number of elements in a linked lists
 * @h: linked list to count
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
size_t total = 0;

while (h)
{
total++;
h = h->next;
}

return (total);
}

