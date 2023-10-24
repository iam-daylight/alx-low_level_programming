#include "lists.h"

/**
 * sum_listint - function calculates the sum of data in a list
 * @head: first node in the list
 * Return: resulting total
 */

int sum_listint(listint_t *head)
{
int total = 0;
listint_t *xxx = head;

while (xxx)
{
	total += xxx->n;
	xxx = xxx->next;
}

return (total);
}

