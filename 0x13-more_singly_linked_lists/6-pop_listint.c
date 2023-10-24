#include "lists.h"

/**
 * pop_listint -function deletes the head node of a linked list
 * @head: first element in the linked list
 * Return: the deleted data,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *xxx;
int number;

if (!head || !*head)
return (0);

number = (*head)->n;
xxx = (*head)->next;
free(*head);
*head = xxx;

return (number);
}

