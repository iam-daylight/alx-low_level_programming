#include"main.h"

/**
 * get_bit - returns the value of a bit at a particular index
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int vid, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	vid = 1 << index;
	c = n & vid;
	if (c == vid)
		return (1);
	return (0);
}

