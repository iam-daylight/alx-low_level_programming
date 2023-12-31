#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function to concatenate two values
 * @s1: input value
 * @s2: input value
 * Return: concated s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
		a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	conc = malloc(sizeof(char) * (a + b + 1));
	if (conc == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		conc[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		conc[a] = s2[b];
		a++, b++;
	}
	conc[a] = '\0';
	return (conc);
}

