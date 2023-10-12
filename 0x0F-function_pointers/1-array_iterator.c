#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem
 * @array: array
 * @size:  elem to print
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

