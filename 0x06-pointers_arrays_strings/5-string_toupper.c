#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @m: pointer
 * Return: m
 */

char *string_toupper(char *m)
{
	int a;

	a = 0;
	while (m[a] != '\0')
	{
		if (m[a] >= 'a' && m[a] <= 'z')
			m[a] = m[a] - 32;
		a++;
	}
	return (m);
}
