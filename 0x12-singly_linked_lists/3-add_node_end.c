#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -A function that adds a new node at the end of a linked list
 * @head: double pointer to the list
 * @str: string to use
 * Return: address to the new element, or NULL if it unsuccessful
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *again;
list_t *now = *head;
unsigned int len = 0;

while (str[len])
len++;

again = malloc(sizeof(list_t));
if (!again)
return (NULL);

again->str = strdup(str);
again->len = len;
again->next = NULL;

if (*head == NULL)
{
*head = again;
return (again);
}

while (now->next)
now = now->next;

now->next = again;

return (again);
}

