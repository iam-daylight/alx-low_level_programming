#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: The string to be measured
 * Return: The lenght of a string
 */

int _strlen_recursion(char *s)
{
	int size = 0;

	if (*s)
	{
		size++;
		size += _strlen_recursion(s + 1);
	}
	return (size);
}
