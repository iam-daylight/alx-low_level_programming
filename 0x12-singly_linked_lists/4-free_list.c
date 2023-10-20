#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that clears a linked list
 * @head: list to be cleared
 */

void free_list(list_t *head)
{
list_t *now;

while (head)
{
now = head->next;
free(head->str);
free(head);
head = now;
}
}

