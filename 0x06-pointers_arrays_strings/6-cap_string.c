#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: a pointer to the main string
 */

char *cap_string(char *str)
{
	int me = 0;

	while (str[me])
	{
		while (!(str[me] >= 'a' && str[me] <= 'z'))
			me++;
if (str[me - 1] == ' ' ||
str[me - 1] == '\t' ||
str[me - 1] == '\n' ||
str[me - 1] == ',' ||
str[me - 1] == ';' ||
str[me - 1] == '.' ||
str[me - 1] == '!' ||
str[me - 1] == '?' ||
str[me - 1] == '"' ||
str[me - 1] == '(' ||
str[me - 1] == ')' ||
str[me - 1] == '{' ||
str[me - 1] == '}' ||
me == 0)
	str[me] -= 32;
				me++;
	}
	return (str);
}
