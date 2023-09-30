#include "main.h"

/**
 * _memcpy - program to copy memory address
 * @dest: memory that stores
 * @src: copied memory
 * @n: number of bytes
 * Return: copied memory with the number of bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
