#include "lists.h"

/**
 * free_listint_safe - functiom that frees a linked list
 * @h: pointer to the first node
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t bin = 0;
int diff;
listint_t *xxx;

if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
xxx = (*h)->next;
free(*h);
*h = xxx;
bin++;
}
else
{
free(*h);
*h = NULL;
bin++;
break;
}
}

*h = NULL;

return (bin);
}

