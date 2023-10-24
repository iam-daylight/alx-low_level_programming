#include "lists.h"

/**
 * get_nodeint_at_index - A function to return the node at a certain index
 * @head: first node in the linked list
 * @index: index of the node
 * Return: pointer to the node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int v = 0;
listint_t *xxx = head;

while (xxx && v < index)
{
	xxx = xxx->next;
	v++;
}

return (xxx ? xxx : NULL);
}

