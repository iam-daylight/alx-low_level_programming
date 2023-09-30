#include "main.h"

/**
 * _memset -function  puts particular value into a block of memory
 * @s: starting address of the memory
 * @b: the value to put
 * @n: number of bytes to be changed
 * Return: change array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
