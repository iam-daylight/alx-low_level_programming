#include "main.h"

/**
 * _atoi - function that will convert a string into an integer
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	int x = 1, m = 0;

	unsigned int y = 0;

	while (!(s[m] <= '9' && s[m] >= '0') && s[m] != '\0')
	{
		if (s[m] == '-')
			x *= -1;
		x++;
	}
	while (s[m] <= '9' && (s[m] >= '0' && s[m] != '\0'))
	{
		y = (y * 10) + (s[m] - '0');
		m++;
	}
	y *= x;
	return (y);
}
