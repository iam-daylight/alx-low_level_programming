#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index at which bit is going to be set
 *
 * Return: 1 if success, or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_ing;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_ing = 1 << index;
	*n = *n | set_ing;
	return (1);
}

