#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main function
 * @ac: input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, n, b = 0, l = 0;
	char *xxx;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			a++;
	}
	l += ac;
	xxx = malloc(sizeof(char) * l + 1);
	if (xxx == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (n = 0; av[a][n]; n++)
	{
		xxx[b] = av[a][n];
		b++;
	}
	if (xxx[b] == '\0')
	{
		xxx[b++] = '\n';
	}
	}
	return (xxx);
}
