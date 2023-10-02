#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *bbb;
	int j, v = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	bbb = malloc(sizeof(char) * (j + 1));
	if (bbb == NULL)
		return (NULL);
	for (v = 0; str[v]; v++)
		bbb[v] = str[v];
	return (bbb);
}

