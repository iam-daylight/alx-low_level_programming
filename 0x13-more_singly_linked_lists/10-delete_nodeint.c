#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a certain index
 * @head: pointer to the first element
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *xxx = *head;
listint_t *bbb = NULL;
unsigned int c = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(xxx);
return (1);
}

while (c < index - 1)
{
if (!xxx || !(xxx->next))
return (-1);
xxx = xxx->next;
c++;
}


bbb = xxx->next;
xxx->next = bbb->next;
free(bbb);

return (1);
}

