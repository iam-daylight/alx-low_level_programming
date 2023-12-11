#include "main.h"

/**
 * _puts - prints a string
 * _putchar prints a new line
 * @str: The string we have to print
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
