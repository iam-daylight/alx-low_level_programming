
#include "main.h"

/**
 * flip_bits -This code counts the number of bits to change
 * to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter	= 0;
	unsigned long int current;
	unsigned long int p = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = p >> i;
		if (current & 1)
			counter++;
	}

	return (counter);
}


