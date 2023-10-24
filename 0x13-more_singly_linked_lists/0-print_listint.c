#include "lists.h"

/**
 * print_listint -A function that prints all the elements of a linked list
 * @h: linked list to print
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
size_t amount = 0;

while (h)
{
printf("%d\n", h->n);
amount++;
h = h->next;
}

return (amount);
}

