#include "main.h"

/**
 * print_alphabet_x10 - this is the main function
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int m;

	int n;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
		_putchar(n);
		}
		_putchar('\n');
	}
}
