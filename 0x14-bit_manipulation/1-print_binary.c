#include "main.h"

/**
 * _pow - func calculates (base to the power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base to the power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int i;

	numb = 1;
	for (i = 1; i <= power; i++)
		numb *= base;
	return (numb);
}

/**
 * print_binary - prints a number in binary format
 * @n: number to print
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int vid, c;
	char flag;

	flag = 0;
	vid = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (vid != 0)
	{
		c = n & vid;
		if (c == vid)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || vid == 1)
		{
			_putchar('0');
		}
		vid >>= 1;
	}
}


