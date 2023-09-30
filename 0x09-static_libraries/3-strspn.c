#include "main.h"
/**
 * _strspn -point of entry
 * @s: input value
 * @accept: input value
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				m++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (m);
			}
			s++;
		}
		return (m);
}

