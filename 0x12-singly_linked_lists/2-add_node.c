#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -function to add a new node at the beginning of a linked list
 * @head: double pointer to the list
 * @str: new string to add
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *again;
	unsigned int len = 0;

	while (str[len])
		len++;

	again = malloc(sizeof(list_t));
	if (!again)
		return (NULL);

	again->str = strdup(str);
	again->len = len;
	again->next = (*head);
	(*head) = again;
	return (*head);
}

