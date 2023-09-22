#include "main.h"
#include <stdio.h>

/**
 * rot13 - A function tha encodes a string using rot13
 * @m: pointer to string params
 * Return: *m
 */

char *rot13(char *m)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; m[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (m[a] == data1[b])
			{
				m[a] = datarot[b];
				break;
			}
		}
	}
	return (m);
}
